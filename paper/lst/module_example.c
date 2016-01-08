#include <linux/module.h>	
// Must be included by all modules 
#include <linux/kernel.h>	
// Kernel functions like printk() 
#include <linux/init.h>		
// For macros like module_init()

static int __init init_test(void)
{
    printk("Hello!\n");
    return 0;
}

static void __exit exit_test(void)
{
    printk("Aaaaaand I'm gone.\n");
}

module_init(init_test);
module_exit(exit_test);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Example");
MODULE_AUTHOR(" --- ");