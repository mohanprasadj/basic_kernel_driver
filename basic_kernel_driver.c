#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

/*
** Module Init function
*/

static int __init basic_kernel_driver_init(void)
{
	pr_info("Welcome\n");
	pr_info("Kernel Driver Module is initialized\n");
	return 0;
}

/*
** Module Exit function
*/

void __exit basic_kernel_driver_exit(void)
{
	pr_info("Kernel Driver Module is removed\n");
}

module_init(basic_kernel_driver_init);
module_exit(basic_kernel_driver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("MOHU");
MODULE_DESCRIPTION("A simple Kernel module");
MODULE_VERSION("1:1.0");
