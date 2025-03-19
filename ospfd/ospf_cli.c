// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * March 15 2025, Alexan <fengleiljx@gmail.com>
 *
 * Copyright (C) 2025  Genew, Inc.
 *		       fenglei
 */

#include <zebra.h>
#include "ospf_nb.h"
#include "ospfd/ospf_cli_clippy.c"

/*
 * XXX Add YANG based CLI config writing functions here.
 */
 
#if 0
void lib_interface_ospf_instance_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_bfd_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_network_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_area_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_authentication_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_authentication_message_digest_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_authentication_null_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_message_digest_key_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_message_digest_key_mds_key_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_authentication_key_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_cost_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_dead_interval_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_dead_interval_minimal_hello_multiplier_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_hello_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_retransmit_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_transmit_delay_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_mtu_ignore_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_priority_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_interface_address_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_interface_address_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_interface_address_authentication_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_interface_address_authentication_message_digest_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_interface_address_authentication_null_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_interface_address_message_digest_key_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_interface_address_message_digest_key_mds_key_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_interface_address_authentication_key_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_interface_address_cost_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_interface_address_dead_interval_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_interface_address_dead_interval_minimal_hello_multiplier_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_interface_address_hello_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_interface_address_retransmit_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_interface_address_transmit_delay_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_interface_address_mtu_ignore_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void lib_interface_ospf_instance_interface_address_priority_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_use_arp_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_capability_opaque_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_compatible_rfc1583_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_default_metric_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_write_multiplier_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_router_info_as_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_router_info_area_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_default_information_originate_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_default_information_always_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_default_information_metric_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_default_information_metric_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_default_information_route_map_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_metric_type_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_route_map_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_distance_admin_value_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_distance_ospf_external_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_distance_ospf_inter_area_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_distance_ospf_intra_area_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_distribute_list_dlist_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_distribute_list_dlist_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_max_metric_router_lsa_on_shutdown_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_max_metric_router_lsa_on_startup_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_on_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_router_address_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_inter_as_as_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_inter_as_area_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_ospf_abr_type_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_ospf_opaque_lsa_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_ospf_rfc1583compatibility_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_ospf_router_id_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_ospf_write_multiplier_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_timers_refresh_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_timers_lsa_min_arrival_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_timers_throttle_lsa_all_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_timers_throttle_spf_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_timers_throttle_spf_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_global_block_upper_bound_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_srlb_lower_bound_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_srlb_upper_bound_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_node_msd_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_on_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_prefix_sid_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_prefix_sid_prefix_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_prefix_sid_last_hop_behavior_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_neighbor_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_neighbor_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_neighbor_poll_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_network_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_network_area_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_passive_interface_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_passive_interface_address_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_authentication_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_authentication_message_digest_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_default_cost_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_export_list_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_import_list_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_filter_list_prefix_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_filter_list_in_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_filter_list_out_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_no_summary_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_translate_always_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_translate_candidate_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_translate_never_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_advertise_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_not_advertise_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_cost_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_cost_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_stub_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_stub_no_summary_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_shortcut_default_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_shortcut_disable_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_shortcut_enable_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_message_digest_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_null_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_message_digest_key_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_message_digest_key_mds_key_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_key_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_dead_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_hello_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_retransmit_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_transmit_delay_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults);
#endif

#if 0
void lib_interface_ospf_instance_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_bfd_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_network_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_network_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_authentication_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}


void lib_interface_ospf_instance_authentication_message_digest_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_authentication_null_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_message_digest_key_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_message_digest_key_mds_key_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_authentication_key_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_cost_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_dead_interval_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_dead_interval_minimal_hello_multiplier_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_hello_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_hello_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_transmit_delay_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_mtu_ignore_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_mtu_ignore_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_interface_address_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_interface_address_area_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_interface_address_authentication_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_interface_address_authentication_message_digest_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_interface_address_authentication_null_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_interface_address_message_digest_key_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_interface_address_message_digest_key_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_interface_address_authentication_key_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_interface_address_cost_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_interface_address_cost_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_interface_address_dead_interval_minimal_hello_multiplier_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_interface_address_hello_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_interface_address_retransmit_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_interface_address_transmit_delay_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_interface_address_transmit_delay_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_interface_address_priority_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void lib_interface_ospf_instance_interface_address_priority_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_use_arp_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_capability_opaque_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_compatible_rfc1583_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_default_metric_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_write_multiplier_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_router_info_as_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_router_info_area_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_default_information_originate_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_default_information_originate_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_default_information_metric_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_default_information_metric_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_default_information_route_map_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_metric_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_metric_type_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_route_map_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_distance_admin_value_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_distance_ospf_external_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_distance_ospf_inter_area_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_distance_ospf_intra_area_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_distribute_list_dlist_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_max_metric_router_lsa_administrative_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_max_metric_router_lsa_on_shutdown_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_max_metric_router_lsa_on_startup_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_on_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_router_address_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_inter_as_as_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_inter_as_area_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_ospf_abr_type_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_ospf_opaque_lsa_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_ospf_rfc1583compatibility_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_ospf_router_id_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_ospf_router_id_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_timers_refresh_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_timers_lsa_min_arrival_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_timers_throttle_lsa_all_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_timers_throttle_spf_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_global_block_lower_bound_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_global_block_upper_bound_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_srlb_lower_bound_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_srlb_upper_bound_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_node_msd_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_on_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_prefix_sid_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_prefix_sid_prefix_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_prefix_sid_last_hop_behavior_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_neighbor_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_neighbor_priority_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_neighbor_poll_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_network_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_network_area_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_passive_interface_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_passive_interface_address_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_authentication_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_authentication_message_digest_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_default_cost_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_export_list_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_import_list_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_filter_list_prefix_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_filter_list_in_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_filter_list_out_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_no_summary_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_translate_always_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_translate_candidate_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_translate_never_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_advertise_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_not_advertise_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_cost_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_substitute_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_stub_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_stub_no_summary_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_shortcut_default_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_shortcut_disable_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_shortcut_enable_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_message_digest_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_null_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_null_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_message_digest_key_mds_key_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_key_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_dead_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_hello_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_retransmit_interval_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}

void routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_transmit_delay_cli_write(struct vty *vty, const struct lyd_node *dnode, bool show_defaults)
{
	/* TODO: this cli callback is optional; the cli output may not need to be done at each node. */
}
#endif

/* clang-format off */
const struct frr_yang_module_info frr_ospfd_cli_info = {
	.name = "frr-ospfd",
	.nodes = {
#if 0	
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/bfd",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_bfd_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/network",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_network_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/area",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_area_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/authentication",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_authentication_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/authentication/message-digest",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_authentication_message_digest_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/authentication/null",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_authentication_null_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/message-digest-key",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_message_digest_key_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/message-digest-key/mds-key",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_message_digest_key_mds_key_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/authentication-key",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_authentication_key_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/cost",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_cost_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/dead-interval/interval",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_dead_interval_interval_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/dead-interval/minimal/hello-multiplier",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_dead_interval_minimal_hello_multiplier_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/hello-interval",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_hello_interval_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/retransmit-interval",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_retransmit_interval_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/transmit-delay",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_transmit_delay_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/mtu-ignore",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_mtu_ignore_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/priority",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_priority_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/interface-address",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_interface_address_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/interface-address/area",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_interface_address_area_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/interface-address/authentication",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_interface_address_authentication_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/interface-address/authentication/message-digest",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_interface_address_authentication_message_digest_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/interface-address/authentication/null",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_interface_address_authentication_null_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/interface-address/message-digest-key",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_interface_address_message_digest_key_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/interface-address/message-digest-key/mds-key",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_interface_address_message_digest_key_mds_key_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/interface-address/authentication-key",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_interface_address_authentication_key_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/interface-address/cost",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_interface_address_cost_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/interface-address/dead-interval/interval",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_interface_address_dead_interval_interval_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/interface-address/dead-interval/minimal/hello-multiplier",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_interface_address_dead_interval_minimal_hello_multiplier_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/interface-address/hello-interval",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_interface_address_hello_interval_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/interface-address/retransmit-interval",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_interface_address_retransmit_interval_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/interface-address/transmit-delay",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_interface_address_transmit_delay_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/interface-address/mtu-ignore",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_interface_address_mtu_ignore_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-interface:lib/interface/frr-ospfd:ospf/instance/interface-address/priority",
		 .cbs = {
			 .cli_show = lib_interface_ospf_instance_interface_address_priority_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/auto-cost-reference-bandwidth",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_auto_cost_reference_bandwidth_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/use-arp",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_use_arp_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/capability-opaque",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_capability_opaque_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/compatible-rfc1583",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_compatible_rfc1583_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/default-metric",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_default_metric_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/write-multiplier",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_write_multiplier_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/router-info/as",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_router_info_as_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/router-info/area",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_router_info_area_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/default-information/originate",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_default_information_originate_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/default-information/always",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_default_information_always_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/default-information/metric",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_default_information_metric_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/default-information/metric-type",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_default_information_metric_type_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/default-information/route-map",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_default_information_route_map_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/redistribute",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/redistribute/metric",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_metric_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/redistribute/metric-type",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_metric_type_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/redistribute/route-map",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_route_map_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/distance/admin-value",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_distance_admin_value_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/distance/ospf/external",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_distance_ospf_external_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/distance/ospf/inter-area",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_distance_ospf_inter_area_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/distance/ospf/intra-area",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_distance_ospf_intra_area_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/distribute-list/dlist",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_distribute_list_dlist_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/max-metric/router-lsa/administrative",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_max_metric_router_lsa_administrative_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/max-metric/router-lsa/on-shutdown",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_max_metric_router_lsa_on_shutdown_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/max-metric/router-lsa/on-startup",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_max_metric_router_lsa_on_startup_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/mpls-te/on",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_on_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/mpls-te/router-address",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_router_address_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/mpls-te/inter-as/as",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_inter_as_as_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/mpls-te/inter-as/area",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_inter_as_area_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/ospf/abr-type",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_ospf_abr_type_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/ospf/opaque-lsa",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_ospf_opaque_lsa_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/ospf/rfc1583compatibility",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_ospf_rfc1583compatibility_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/ospf/router-id",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_ospf_router_id_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/ospf/write-multiplier",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_ospf_write_multiplier_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/timers/refresh-interval",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_timers_refresh_interval_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/timers/lsa-min-arrival",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_timers_lsa_min_arrival_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/timers/throttle/lsa-all",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_timers_throttle_lsa_all_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/timers/throttle/spf",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_timers_throttle_spf_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/segment-routing/global-block/lower-bound",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_global_block_lower_bound_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/segment-routing/global-block/upper-bound",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_global_block_upper_bound_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/segment-routing/srlb/lower-bound",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_srlb_lower_bound_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/segment-routing/srlb/upper-bound",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_srlb_upper_bound_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/segment-routing/node-msd",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_node_msd_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/segment-routing/on",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_on_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/segment-routing/prefix-sid",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_prefix_sid_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/segment-routing/prefix-sid/prefix",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_prefix_sid_prefix_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/segment-routing/prefix-sid/last-hop-behavior",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_prefix_sid_last_hop_behavior_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/neighbor",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_neighbor_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/neighbor/priority",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_neighbor_priority_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/neighbor/poll-interval",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_neighbor_poll_interval_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/network",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_network_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/network/area",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_network_area_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/passive-interface",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_passive_interface_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/passive-interface/address",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_passive_interface_address_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/authentication",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_authentication_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/authentication/message-digest",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_authentication_message_digest_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/default-cost",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_default_cost_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/export-list",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_export_list_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/import-list",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_import_list_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/filter-list/prefix",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_filter_list_prefix_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/filter-list/in",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_filter_list_in_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/filter-list/out",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_filter_list_out_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/nssa",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/nssa/no-summary",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_no_summary_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/nssa/translate-always",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_translate_always_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/nssa/translate-candidate",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_translate_candidate_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/nssa/translate-never",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_translate_never_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/ranges/range",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/ranges/range/advertise",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_advertise_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/ranges/range/not-advertise",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_not_advertise_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/ranges/range/cost",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_cost_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/ranges/range/substitute",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_substitute_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/stub",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_stub_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/stub/no-summary",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_stub_no_summary_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/shortcut/default",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_shortcut_default_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/shortcut/disable",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_shortcut_disable_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/shortcut/enable",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_shortcut_enable_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/virtual-link",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/virtual-link/authentication",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/virtual-link/authentication/message-digest",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_message_digest_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/virtual-link/authentication/null",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_null_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/virtual-link/message-digest-key",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_message_digest_key_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/virtual-link/message-digest-key/mds-key",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_message_digest_key_mds_key_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/virtual-link/authentication-key",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_key_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/virtual-link/timers/dead-interval",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_dead_interval_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/virtual-link/timers/hello-interval",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_hello_interval_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/virtual-link/timers/retransmit-interval",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_retransmit_interval_cli_write,
		 }
	 },
	 {
		 .xpath = "/frr-routing:routing/control-plane-protocols/control-plane-protocol/frr-ospfd:ospf/areas/area/virtual-link/timers/transmit-delay",
		 .cbs = {
			 .cli_show = routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_transmit_delay_cli_write,
		 }
	 },
#endif	 
	 {
		 .xpath = NULL,
	 },
	}
};

