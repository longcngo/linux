#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/syscalls.h>
#include <linux/linkage.h>

asmlinkage int sys_getpinfo(void) {
	printk(KERN_EMERG "0w0");
	return 0;
}