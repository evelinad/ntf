#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x1e94b2a0, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2128348c, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x4ff86f7f, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x390d3b81, __VMLINUX_SYMBOL_STR(neigh_lookup) },
	{ 0xcf880810, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xda22cdde, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x44433f2e, __VMLINUX_SYMBOL_STR(gro_find_receive_by_type) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xda344d71, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x9f541f71, __VMLINUX_SYMBOL_STR(ip_mc_leave_group) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x69bf4675, __VMLINUX_SYMBOL_STR(arp_tbl) },
	{ 0x85df0f6a, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x39e12de0, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x45edd5b2, __VMLINUX_SYMBOL_STR(udp_add_offload) },
	{ 0x84c40c8f, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x36aabe13, __VMLINUX_SYMBOL_STR(udp_tunnel_xmit_skb) },
	{ 0xde649ae3, __VMLINUX_SYMBOL_STR(rtnl_notify) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xab0f1249, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa60bb6ad, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xcb03d98c, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x7c5e1e3d, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x5632daf4, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe57c11fd, __VMLINUX_SYMBOL_STR(udp_sock_create6) },
	{ 0xa35d40f6, __VMLINUX_SYMBOL_STR(setup_udp_tunnel_sock) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0xe17361ac, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x2f6d4bbc, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x3f12a47b, __VMLINUX_SYMBOL_STR(udp_tunnel_sock_release) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xe96c9bb2, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x15b6bd4, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0xbdbdcf4c, __VMLINUX_SYMBOL_STR(arp_create) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6d94fda6, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x96242370, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x22e4ec44, __VMLINUX_SYMBOL_STR(ip_mc_join_group) },
	{ 0xee3ee6c7, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xf1730458, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x38a9f7c5, __VMLINUX_SYMBOL_STR(in6addr_loopback) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe3ed70f2, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8ed360d6, __VMLINUX_SYMBOL_STR(gro_find_complete_by_type) },
	{ 0xcf24ef75, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x28dab9d7, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0x5ba15c43, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xe2888b75, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x3c82ed6f, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xde276448, __VMLINUX_SYMBOL_STR(rtnl_set_sk_err) },
	{ 0x77766a3f, __VMLINUX_SYMBOL_STR(udp_del_offload) },
	{ 0x6b2bbb81, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb9249d16, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x89bdc1a, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xa5621a41, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xe54040ca, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xa337f7a5, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8b5a5673, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x3d1f7a21, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x2d10f744, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x40676215, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x7153c43f, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xb8bf8f97, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x9740b0fd, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x811e7d65, __VMLINUX_SYMBOL_STR(udp_tunnel6_xmit_skb) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xe06c0e84, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x620e4fb7, __VMLINUX_SYMBOL_STR(udp_sock_create4) },
	{ 0x7d0db45c, __VMLINUX_SYMBOL_STR(jiffies_to_clock_t) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x946164f, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xb225bf0d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x5e4ce34c, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0xcc4f4752, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xedc8cfa7, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xcdde92cb, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x69f46578, __VMLINUX_SYMBOL_STR(inet_get_local_port_range) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x200b2041, __VMLINUX_SYMBOL_STR(in6addr_any) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udp_tunnel,ip6_udp_tunnel";


MODULE_INFO(srcversion, "CB4EDD5BD6EE6ED0C180EF6");
