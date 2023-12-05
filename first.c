#include <linux/kernel.h>
#include <linux/module.h>
MODULE_AUTHOR("Tsurkan Anastasiia");
MODULE_DESCRIPTION("Lab1 test kernel module"); // Опис фунціоналу
MODULE_LICENSE("MIT"); // ліцензія

static int __init hw_init(void)
{
printk(KERN_ERR "Hello, World!\n");
return 0;
}

static void __exit hw_exit(void)
{
printk(KERN_ERR "Goodbye, World!\n");
}
module_init(hw_init);
module_exit(hw_exit);

