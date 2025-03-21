// SPDX-License-Identifier: GPL-2.0-or-later

/* prototypes */
int lib_interface_ospf_interface_create(struct nb_cb_create_args *args);
void lib_interface_ospf_interface_cli_write(struct vty *vty, const struct lyd_node *dnode,
					    bool show_defaults);
int lib_interface_ospf_interface_destroy(struct nb_cb_destroy_args *args);
const void *lib_interface_ospf_interface_get_next(struct nb_cb_get_next_args *args);
int lib_interface_ospf_interface_get_keys(struct nb_cb_get_keys_args *args);
const void *lib_interface_ospf_interface_lookup_entry(struct nb_cb_lookup_entry_args *args);
struct yang_data *lib_interface_ospf_interface_state_state_get_elem(struct nb_cb_get_elem_args *args);
struct yang_data *
lib_interface_ospf_interface_state_hello_timer_get_elem(struct nb_cb_get_elem_args *args);
const void *
lib_interface_ospf_interface_state_neighbors_neighbor_get_next(struct nb_cb_get_next_args *args);
int lib_interface_ospf_interface_state_neighbors_neighbor_get_keys(struct nb_cb_get_keys_args *args);
const void *lib_interface_ospf_interface_state_neighbors_neighbor_lookup_entry(
	struct nb_cb_lookup_entry_args *args);
struct yang_data *lib_interface_ospf_interface_state_neighbors_neighbor_neighbor_router_id_get_elem(
	struct nb_cb_get_elem_args *args);
struct yang_data *lib_interface_ospf_interface_state_neighbors_neighbor_address_get_elem(
	struct nb_cb_get_elem_args *args);
struct yang_data *lib_interface_ospf_interface_state_neighbors_neighbor_state_get_elem(
	struct nb_cb_get_elem_args *args);
int ospf_instance_create(struct nb_cb_create_args *args);
void ospf_instance_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
int ospf_instance_destroy(struct nb_cb_destroy_args *args);
const void *ospf_instance_get_next(struct nb_cb_get_next_args *args);
int ospf_instance_get_keys(struct nb_cb_get_keys_args *args);
const void *ospf_instance_lookup_entry(struct nb_cb_lookup_entry_args *args);
int ospf_instance_ospf_abr_type_modify(struct nb_cb_modify_args *args);
void ospf_instance_ospf_abr_type_cli_write(struct vty *vty, const struct lyd_node *dnode,
					   bool show_defaults);
int ospf_instance_ospf_abr_type_destroy(struct nb_cb_destroy_args *args);
int ospf_instance_ospf_opaque_lsa_modify(struct nb_cb_modify_args *args);
void ospf_instance_ospf_opaque_lsa_cli_write(struct vty *vty, const struct lyd_node *dnode,
					     bool show_defaults);
int ospf_instance_ospf_opaque_lsa_destroy(struct nb_cb_destroy_args *args);
int ospf_instance_ospf_rfc1583compatibility_modify(struct nb_cb_modify_args *args);
void ospf_instance_ospf_rfc1583compatibility_cli_write(struct vty *vty, const struct lyd_node *dnode,
						       bool show_defaults);
int ospf_instance_ospf_rfc1583compatibility_destroy(struct nb_cb_destroy_args *args);
int ospf_instance_ospf_router_id_modify(struct nb_cb_modify_args *args);
void ospf_instance_ospf_router_id_cli_write(struct vty *vty, const struct lyd_node *dnode,
					    bool show_defaults);
int ospf_instance_ospf_router_id_destroy(struct nb_cb_destroy_args *args);
int ospf_instance_ospf_write_multiplier_modify(struct nb_cb_modify_args *args);
void ospf_instance_ospf_write_multiplier_cli_write(struct vty *vty, const struct lyd_node *dnode,
						   bool show_defaults);
int ospf_instance_ospf_write_multiplier_destroy(struct nb_cb_destroy_args *args);
struct yang_data *
ospf_instance_state_router_flags_router_flag_get_elem(struct nb_cb_get_elem_args *args);
const void *ospf_instance_state_router_flags_router_flag_get_next(struct nb_cb_get_next_args *args);
struct yang_data *
ospf_instance_state_statistics_originate_new_lsa_count_get_elem(struct nb_cb_get_elem_args *args);
struct yang_data *
ospf_instance_state_statistics_rx_new_lsas_count_get_elem(struct nb_cb_get_elem_args *args);
struct yang_data *
ospf_instance_state_statistics_spf_timestamp_get_elem(struct nb_cb_get_elem_args *args);
struct yang_data *
ospf_instance_state_statistics_spf_duration_get_elem(struct nb_cb_get_elem_args *args);
int ospf_instance_areas_area_create(struct nb_cb_create_args *args);
void ospf_instance_areas_area_cli_write(struct vty *vty, const struct lyd_node *dnode,
					bool show_defaults);
int ospf_instance_areas_area_destroy(struct nb_cb_destroy_args *args);
const void *ospf_instance_areas_area_get_next(struct nb_cb_get_next_args *args);
int ospf_instance_areas_area_get_keys(struct nb_cb_get_keys_args *args);
const void *ospf_instance_areas_area_lookup_entry(struct nb_cb_lookup_entry_args *args);
struct yang_data *
ospf_instance_areas_area_state_statistics_spf_runs_count_get_elem(struct nb_cb_get_elem_args *args);
struct yang_data *
ospf_instance_areas_area_state_statistics_abr_count_get_elem(struct nb_cb_get_elem_args *args);
struct yang_data *
ospf_instance_areas_area_state_statistics_asbr_count_get_elem(struct nb_cb_get_elem_args *args);
struct yang_data *ospf_instance_areas_area_state_statistics_area_scope_lsa_count_get_elem(
	struct nb_cb_get_elem_args *args);
struct yang_data *
ospf_instance_areas_area_state_statistics_spf_timestamp_get_elem(struct nb_cb_get_elem_args *args);
struct yang_data *ospf_instance_areas_area_state_statistics_active_interfaces_get_elem(
	struct nb_cb_get_elem_args *args);
struct yang_data *
ospf_instance_areas_area_state_statistics_full_nbrs_get_elem(struct nb_cb_get_elem_args *args);
struct yang_data *
ospf_instance_areas_area_state_statistics_full_virtual_get_elem(struct nb_cb_get_elem_args *args);

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

void lib_interface_ospf_interface_cli_write(struct vty *vty, const struct lyd_node *dnode,
					    bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
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

const void *lib_interface_ospf_interface_get_next(struct nb_cb_get_next_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

int lib_interface_ospf_interface_get_keys(struct nb_cb_get_keys_args *args)
{
	/* TODO: implement me. */
	return NB_OK;
}

const void *lib_interface_ospf_interface_lookup_entry(struct nb_cb_lookup_entry_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-interface:lib/interface/frr-ospfd-lite:ospf-interface/state/state
 */
struct yang_data *lib_interface_ospf_interface_state_state_get_elem(struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-interface:lib/interface/frr-ospfd-lite:ospf-interface/state/hello-timer
 */
struct yang_data *
lib_interface_ospf_interface_state_hello_timer_get_elem(struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-interface:lib/interface/frr-ospfd-lite:ospf-interface/state/neighbors/neighbor
 */
const void *
lib_interface_ospf_interface_state_neighbors_neighbor_get_next(struct nb_cb_get_next_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

int lib_interface_ospf_interface_state_neighbors_neighbor_get_keys(struct nb_cb_get_keys_args *args)
{
	/* TODO: implement me. */
	return NB_OK;
}

const void *lib_interface_ospf_interface_state_neighbors_neighbor_lookup_entry(
	struct nb_cb_lookup_entry_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-interface:lib/interface/frr-ospfd-lite:ospf-interface/state/neighbors/neighbor/neighbor-router-id
 */
struct yang_data *lib_interface_ospf_interface_state_neighbors_neighbor_neighbor_router_id_get_elem(
	struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-interface:lib/interface/frr-ospfd-lite:ospf-interface/state/neighbors/neighbor/address
 */
struct yang_data *lib_interface_ospf_interface_state_neighbors_neighbor_address_get_elem(
	struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-interface:lib/interface/frr-ospfd-lite:ospf-interface/state/neighbors/neighbor/state
 */
struct yang_data *lib_interface_ospf_interface_state_neighbors_neighbor_state_get_elem(
	struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance
 */
int ospf_instance_create(struct nb_cb_create_args *args)
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

void ospf_instance_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

int ospf_instance_destroy(struct nb_cb_destroy_args *args)
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

const void *ospf_instance_get_next(struct nb_cb_get_next_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

int ospf_instance_get_keys(struct nb_cb_get_keys_args *args)
{
	/* TODO: implement me. */
	return NB_OK;
}

const void *ospf_instance_lookup_entry(struct nb_cb_lookup_entry_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/state/router-flags/router-flag
 */
struct yang_data *
ospf_instance_state_router_flags_router_flag_get_elem(struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

const void *ospf_instance_state_router_flags_router_flag_get_next(struct nb_cb_get_next_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/state/statistics/originate-new-lsa-count
 */
struct yang_data *
ospf_instance_state_statistics_originate_new_lsa_count_get_elem(struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/state/statistics/rx-new-lsas-count
 */
struct yang_data *
ospf_instance_state_statistics_rx_new_lsas_count_get_elem(struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/state/statistics/spf/timestamp
 */
struct yang_data *
ospf_instance_state_statistics_spf_timestamp_get_elem(struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/state/statistics/spf/duration
 */
struct yang_data *
ospf_instance_state_statistics_spf_duration_get_elem(struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
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

void ospf_instance_areas_area_cli_write(struct vty *vty, const struct lyd_node *dnode,
					bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
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

const void *ospf_instance_areas_area_get_next(struct nb_cb_get_next_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

int ospf_instance_areas_area_get_keys(struct nb_cb_get_keys_args *args)
{
	/* TODO: implement me. */
	return NB_OK;
}

const void *ospf_instance_areas_area_lookup_entry(struct nb_cb_lookup_entry_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/areas/area/state/statistics/spf-runs-count
 */
struct yang_data *
ospf_instance_areas_area_state_statistics_spf_runs_count_get_elem(struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/areas/area/state/statistics/abr-count
 */
struct yang_data *
ospf_instance_areas_area_state_statistics_abr_count_get_elem(struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/areas/area/state/statistics/asbr-count
 */
struct yang_data *
ospf_instance_areas_area_state_statistics_asbr_count_get_elem(struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/areas/area/state/statistics/area-scope-lsa-count
 */
struct yang_data *ospf_instance_areas_area_state_statistics_area_scope_lsa_count_get_elem(
	struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/areas/area/state/statistics/spf-timestamp
 */
struct yang_data *
ospf_instance_areas_area_state_statistics_spf_timestamp_get_elem(struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/areas/area/state/statistics/active-interfaces
 */
struct yang_data *ospf_instance_areas_area_state_statistics_active_interfaces_get_elem(
	struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/areas/area/state/statistics/full-nbrs
 */
struct yang_data *
ospf_instance_areas_area_state_statistics_full_nbrs_get_elem(struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-ospfd-lite:ospf/instance/areas/area/state/statistics/full-virtual
 */
struct yang_data *
ospf_instance_areas_area_state_statistics_full_virtual_get_elem(struct nb_cb_get_elem_args *args)
{
	/* TODO: implement me. */
	return NULL;
}

/* clang-format off */
const struct frr_yang_module_info frr_ospfd_lite_nb_info = {
	.name = "frr-ospfd-lite",
	.nodes = {
		{
			.xpath = "/frr-interface:lib/interface/frr-ospfd-lite:ospf-interface",
			.cbs = {
				.create = lib_interface_ospf_interface_create,
				.destroy = lib_interface_ospf_interface_destroy,
				.get_next = lib_interface_ospf_interface_get_next,
				.get_keys = lib_interface_ospf_interface_get_keys,
				.lookup_entry = lib_interface_ospf_interface_lookup_entry,
			}
		},
		{
			.xpath = "/frr-interface:lib/interface/frr-ospfd-lite:ospf-interface/state/state",
			.cbs = {
				.get_elem = lib_interface_ospf_interface_state_state_get_elem,
			}
		},
		{
			.xpath = "/frr-interface:lib/interface/frr-ospfd-lite:ospf-interface/state/hello-timer",
			.cbs = {
				.get_elem = lib_interface_ospf_interface_state_hello_timer_get_elem,
			}
		},
		{
			.xpath = "/frr-interface:lib/interface/frr-ospfd-lite:ospf-interface/state/neighbors/neighbor",
			.cbs = {
				.get_next = lib_interface_ospf_interface_state_neighbors_neighbor_get_next,
				.get_keys = lib_interface_ospf_interface_state_neighbors_neighbor_get_keys,
				.lookup_entry = lib_interface_ospf_interface_state_neighbors_neighbor_lookup_entry,
			}
		},
		{
			.xpath = "/frr-interface:lib/interface/frr-ospfd-lite:ospf-interface/state/neighbors/neighbor/neighbor-router-id",
			.cbs = {
				.get_elem = lib_interface_ospf_interface_state_neighbors_neighbor_neighbor_router_id_get_elem,
			}
		},
		{
			.xpath = "/frr-interface:lib/interface/frr-ospfd-lite:ospf-interface/state/neighbors/neighbor/address",
			.cbs = {
				.get_elem = lib_interface_ospf_interface_state_neighbors_neighbor_address_get_elem,
			}
		},
		{
			.xpath = "/frr-interface:lib/interface/frr-ospfd-lite:ospf-interface/state/neighbors/neighbor/state",
			.cbs = {
				.get_elem = lib_interface_ospf_interface_state_neighbors_neighbor_state_get_elem,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance",
			.cbs = {
				.create = ospf_instance_create,
				.destroy = ospf_instance_destroy,
				.get_next = ospf_instance_get_next,
				.get_keys = ospf_instance_get_keys,
				.lookup_entry = ospf_instance_lookup_entry,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/ospf/abr-type",
			.cbs = {
				.modify = ospf_instance_ospf_abr_type_modify,
				.destroy = ospf_instance_ospf_abr_type_destroy,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/ospf/opaque-lsa",
			.cbs = {
				.modify = ospf_instance_ospf_opaque_lsa_modify,
				.destroy = ospf_instance_ospf_opaque_lsa_destroy,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/ospf/rfc1583compatibility",
			.cbs = {
				.modify = ospf_instance_ospf_rfc1583compatibility_modify,
				.destroy = ospf_instance_ospf_rfc1583compatibility_destroy,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/ospf/router-id",
			.cbs = {
				.modify = ospf_instance_ospf_router_id_modify,
				.destroy = ospf_instance_ospf_router_id_destroy,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/ospf/write-multiplier",
			.cbs = {
				.modify = ospf_instance_ospf_write_multiplier_modify,
				.destroy = ospf_instance_ospf_write_multiplier_destroy,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/state/router-flags/router-flag",
			.cbs = {
				.get_elem = ospf_instance_state_router_flags_router_flag_get_elem,
				.get_next = ospf_instance_state_router_flags_router_flag_get_next,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/state/statistics/originate-new-lsa-count",
			.cbs = {
				.get_elem = ospf_instance_state_statistics_originate_new_lsa_count_get_elem,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/state/statistics/rx-new-lsas-count",
			.cbs = {
				.get_elem = ospf_instance_state_statistics_rx_new_lsas_count_get_elem,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/state/statistics/spf/timestamp",
			.cbs = {
				.get_elem = ospf_instance_state_statistics_spf_timestamp_get_elem,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/state/statistics/spf/duration",
			.cbs = {
				.get_elem = ospf_instance_state_statistics_spf_duration_get_elem,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/areas/area",
			.cbs = {
				.create = ospf_instance_areas_area_create,
				.destroy = ospf_instance_areas_area_destroy,
				.get_next = ospf_instance_areas_area_get_next,
				.get_keys = ospf_instance_areas_area_get_keys,
				.lookup_entry = ospf_instance_areas_area_lookup_entry,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/areas/area/state/statistics/spf-runs-count",
			.cbs = {
				.get_elem = ospf_instance_areas_area_state_statistics_spf_runs_count_get_elem,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/areas/area/state/statistics/abr-count",
			.cbs = {
				.get_elem = ospf_instance_areas_area_state_statistics_abr_count_get_elem,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/areas/area/state/statistics/asbr-count",
			.cbs = {
				.get_elem = ospf_instance_areas_area_state_statistics_asbr_count_get_elem,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/areas/area/state/statistics/area-scope-lsa-count",
			.cbs = {
				.get_elem = ospf_instance_areas_area_state_statistics_area_scope_lsa_count_get_elem,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/areas/area/state/statistics/spf-timestamp",
			.cbs = {
				.get_elem = ospf_instance_areas_area_state_statistics_spf_timestamp_get_elem,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/areas/area/state/statistics/active-interfaces",
			.cbs = {
				.get_elem = ospf_instance_areas_area_state_statistics_active_interfaces_get_elem,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/areas/area/state/statistics/full-nbrs",
			.cbs = {
				.get_elem = ospf_instance_areas_area_state_statistics_full_nbrs_get_elem,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/areas/area/state/statistics/full-virtual",
			.cbs = {
				.get_elem = ospf_instance_areas_area_state_statistics_full_virtual_get_elem,
			}
		},
		{
			.xpath = NULL,
		},
	}
};

/* clang-format off */
const struct frr_yang_module_info frr_ospfd_lite_cli_info = {
	.name = "frr-ospfd-lite",
	.nodes = {
		{
			.xpath = "/frr-interface:lib/interface/frr-ospfd-lite:ospf-interface",
			.cbs = {
				.cli_show = lib_interface_ospf_interface_cli_write,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance",
			.cbs = {
				.cli_show = ospf_instance_cli_write,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/ospf/abr-type",
			.cbs = {
				.cli_show = ospf_instance_ospf_abr_type_cli_write,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/ospf/opaque-lsa",
			.cbs = {
				.cli_show = ospf_instance_ospf_opaque_lsa_cli_write,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/ospf/rfc1583compatibility",
			.cbs = {
				.cli_show = ospf_instance_ospf_rfc1583compatibility_cli_write,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/ospf/router-id",
			.cbs = {
				.cli_show = ospf_instance_ospf_router_id_cli_write,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/ospf/write-multiplier",
			.cbs = {
				.cli_show = ospf_instance_ospf_write_multiplier_cli_write,
			}
		},
		{
			.xpath = "/frr-ospfd-lite:ospf/instance/areas/area",
			.cbs = {
				.cli_show = ospf_instance_areas_area_cli_write,
			}
		},
		{
			.xpath = NULL,
		},
	}
};
