// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * June 21 2023, Christian Hopps <chopps@labn.net>
 *
 * Copyright (C) 2023 LabN Consulting, L.L.C.
 *
 */

#include "lib/zebra.h"

#include "ospfd/ospf_nb.h"

#include "ospfd/ospfd.h"
#include "ospfd/ospf_spf.h"
#include "ospfd/ospf_opaque.h"
#include "ospfd/ospf_gr.h"

#include "ospfd/ospf_asbr.h"
#include "ospfd/ospf_lsa.h"
#include "ospfd/ospf_lsdb.h"
#include "ospfd/ospf_opaque.h"
#include "ospfd/ospf_neighbor.h"
#include "ospfd/ospf_interface.h"

/*
 * XPath: /frr-interface:lib/interface/frr-ospfd-lite:ospf-interface
 */
int lib_interface_ospf_interface_create(struct nb_cb_create_args *args)
{
	switch (args->event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int lib_interface_ospf_interface_destroy(struct nb_cb_destroy_args *args)
{
	switch (args->event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance
 */
int ospf_instance_create(struct nb_cb_create_args *args)
{
	struct ospf *ospf;
	bool created = false;
	const char *vrf_name;

	if (args->event != NB_EV_APPLY)
		return NB_OK;

	vrf_name = yang_dnode_get_string(args->dnode, "vrf");

	/* every ospf process ospf_instance id is not same */
	ospf = ospf_get(ospf_instance, vrf_name, &created);
	nb_running_set_entry(args->dnode, ospf);

	return NB_OK;
}

int ospf_instance_destroy(struct nb_cb_destroy_args *args)
{
	struct ospf *ospf;

	if (args->event != NB_EV_APPLY)
		return NB_OK;

	ospf = nb_running_unset_entry(args->dnode);
	if (ospf->gr_info.restart_support)
		ospf_gr_nvm_delete(ospf);
	ospf_finish(ospf);

	return NB_OK;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/ospf/abr-type
 */
int ospf_instance_ospf_abr_type_modify(struct nb_cb_modify_args *args)
{
	struct ospf *ospf;
	int abr_type;

	ospf = nb_running_get_entry(args->dnode, NULL, true);
	abr_type = yang_dnode_get_enum(args->dnode, NULL);

	switch (args->event) {
	case NB_EV_VALIDATE:
		if (abr_type < 1 || abr_type > 4)
			return NB_ERR_VALIDATION;
		break;
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		ospf->abr_type = abr_type;
		ospf_spf_calculate_schedule(ospf, SPF_FLAG_ABR_STATUS_CHANGE);
		break;
	}

	return NB_OK;
}

int ospf_instance_ospf_abr_type_destroy(struct nb_cb_destroy_args *args)
{
	struct ospf *ospf;
	int abr_type;

	ospf = nb_running_get_entry(args->dnode, NULL, true);
	abr_type = yang_dnode_get_enum(args->dnode, NULL);

	switch (args->event) {
	case NB_EV_VALIDATE:
		if (abr_type < 1 || abr_type > 4)
			return NB_ERR_VALIDATION;
		break;
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		ospf->abr_type = OSPF_ABR_DEFAULT;
		ospf_spf_calculate_schedule(ospf, SPF_FLAG_ABR_STATUS_CHANGE);
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/ospf/opaque-lsa
 */
int ospf_instance_ospf_opaque_lsa_modify(struct nb_cb_modify_args *args)
{
	struct ospf *ospf;
	bool opaque_lsa;

	ospf = nb_running_get_entry(args->dnode, NULL, true);

	switch (args->event) {
	case NB_EV_VALIDATE:

		/* Check that OSPF is using default VRF */
		if (ospf->vrf_id != VRF_DEFAULT) {
			return NB_ERR_VALIDATION;
		}

		break;
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */

		opaque_lsa = yang_dnode_get_bool(args->dnode, NULL);
		if (opaque_lsa) {
			if (!CHECK_FLAG(ospf->config, OSPF_OPAQUE_CAPABLE)) {
				SET_FLAG(ospf->config, OSPF_OPAQUE_CAPABLE);
				ospf_renegotiate_optional_capabilities(ospf);
			}
		} else {
			/* Turn off the "master switch" of opaque-lsa capability. */
			if (CHECK_FLAG(ospf->config, OSPF_OPAQUE_CAPABLE)) {
				UNSET_FLAG(ospf->config, OSPF_OPAQUE_CAPABLE);
				ospf_renegotiate_optional_capabilities(ospf);
			}
		}
		break;
	}

	return NB_OK;
}

int ospf_instance_ospf_opaque_lsa_destroy(struct nb_cb_destroy_args *args)
{
	return NB_OK;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/ospf/rfc1583compatibility
 */
int ospf_instance_ospf_rfc1583compatibility_modify(struct nb_cb_modify_args *args)
{
	struct ospf *ospf;
	bool rfc1583compatibility;

	if (args->event != NB_EV_APPLY)
		return NB_OK;

	ospf = nb_running_get_entry(args->dnode, NULL, true);
	rfc1583compatibility = yang_dnode_get_bool(args->dnode, NULL);

	if (rfc1583compatibility) {
		if (!CHECK_FLAG(ospf->config, OSPF_RFC1583_COMPATIBLE)) {
			SET_FLAG(ospf->config, OSPF_RFC1583_COMPATIBLE);
			ospf_spf_calculate_schedule(ospf, SPF_FLAG_CONFIG_CHANGE);
		}
	} else {
		if (CHECK_FLAG(ospf->config, OSPF_RFC1583_COMPATIBLE)) {
			UNSET_FLAG(ospf->config, OSPF_RFC1583_COMPATIBLE);
			ospf_spf_calculate_schedule(ospf, SPF_FLAG_CONFIG_CHANGE);
		}
	}
	return NB_OK;
}

int ospf_instance_ospf_rfc1583compatibility_destroy(struct nb_cb_destroy_args *args)
{
	return NB_OK;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/ospf/router-id
 */
int ospf_instance_ospf_router_id_modify(struct nb_cb_modify_args *args)
{
	struct ospf *ospf;
	struct in_addr value;

	switch (args->event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		ospf = nb_running_get_entry(args->dnode, NULL, true);
		yang_dnode_get_ipv4(&value, args->dnode, NULL);
		ospf->router_id_static.s_addr = value.s_addr;
		ospf_router_id_update(ospf);
		break;
	}

	return NB_OK;
}

int ospf_instance_ospf_router_id_destroy(struct nb_cb_destroy_args *args)
{
	struct ospf *ospf;
	struct in_addr value;

	yang_dnode_get_ipv4(&value, args->dnode, NULL);
	ospf = nb_running_get_entry(args->dnode, NULL, true);

	switch (args->event) {
	case NB_EV_VALIDATE:

		if (ospf->router_id_static.s_addr != value.s_addr)
			return NB_ERR_VALIDATION;
		break;
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		ospf->router_id_static.s_addr = 0;
		ospf_router_id_update(ospf);
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/ospf/write-multiplier
 */
int ospf_instance_ospf_write_multiplier_modify(struct nb_cb_modify_args *args)
{
	struct ospf *ospf;
	uint32_t write_oi_count;

	write_oi_count = yang_dnode_get_uint8(args->dnode, NULL);

	switch (args->event) {
	case NB_EV_VALIDATE:
		if (write_oi_count < 1 || write_oi_count > 100)
			return NB_ERR_VALIDATION;
		break;
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		ospf = nb_running_get_entry(args->dnode, NULL, true);
		ospf->write_oi_count = write_oi_count;
		break;
	}

	return NB_OK;
}

int ospf_instance_ospf_write_multiplier_destroy(struct nb_cb_destroy_args *args)
{
	struct ospf *ospf;
	uint32_t write_oi_count;

	write_oi_count = yang_dnode_get_uint8(args->dnode, NULL);

	switch (args->event) {
	case NB_EV_VALIDATE:
		if (write_oi_count < 1 || write_oi_count > 100)
			return NB_ERR_VALIDATION;
		break;
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		ospf = nb_running_get_entry(args->dnode, NULL, true);
		ospf->write_oi_count = OSPF_WRITE_INTERFACE_COUNT_DEFAULT;
		break;
	}

	return NB_OK;
}


/*
 * XPath: /frr-ospfd-lite:ospf/instance/areas/area
 */
int ospf_instance_areas_area_create(struct nb_cb_create_args *args)
{
	switch (args->event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int ospf_instance_areas_area_destroy(struct nb_cb_destroy_args *args)
{
	switch (args->event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

