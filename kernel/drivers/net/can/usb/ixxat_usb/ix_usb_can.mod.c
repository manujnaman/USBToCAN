#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3c913dfb, "usb_alloc_urb" },
	{ 0xd8b710c3, "usb_anchor_urb" },
	{ 0xceadc1c3, "usb_free_urb" },
	{ 0x2540448b, "can_free_echo_skb" },
	{ 0x184a7b48, "can_put_echo_skb" },
	{ 0x84f88c41, "can_get_echo_skb" },
	{ 0xd6e69bd7, "unregister_netdev" },
	{ 0x9786edc9, "alloc_canfd_skb" },
	{ 0xaca7784b, "usb_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x35789eee, "kmem_cache_alloc_trace" },
	{ 0x30dd368, "open_candev" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x273033fa, "netdev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf285c83a, "alloc_can_skb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x76053ff5, "netif_device_detach" },
	{ 0xbf631fd9, "unregister_candev" },
	{ 0x2de8eb5f, "usb_submit_urb" },
	{ 0xd6263894, "_dev_info" },
	{ 0xb775d895, "can_change_mtu" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xe4e71ba2, "_dev_err" },
	{ 0xdebed82c, "free_candev" },
	{ 0x83dae55b, "alloc_candev_mqs" },
	{ 0x6047ede6, "can_fd_len2dlc" },
	{ 0xaf800176, "kfree_skb_reason" },
	{ 0x8b340b22, "usb_control_msg" },
	{ 0xf12d9387, "can_fd_dlc2len" },
	{ 0x6d7d5d36, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x83a2c20d, "netif_tx_wake_queue" },
	{ 0xf7291d4c, "close_candev" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6a9404be, "netif_rx" },
	{ 0x373905d8, "can_bus_off" },
	{ 0x7c8c9c8b, "usb_unanchor_urb" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x8db4f63e, "usb_reset_configuration" },
	{ 0x9fe1799b, "alloc_can_err_skb" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xf5c888b0, "register_candev" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf301d0c, "kmalloc_caches" },
	{ 0x8ca1533a, "netdev_info" },
	{ 0x541a6db8, "module_layout" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v08D8p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D8p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D8p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D8p000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D8p001Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D8p0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D8p0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D8p0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D8p001Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D8p001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D8pFF12d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D8pFF13d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CD14CD8D575A985B67725CD");
