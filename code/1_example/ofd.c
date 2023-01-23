
/*
1. dynamic loading & unloading of drivers into & out of (Linux) kernel.
2. find /lib/modules/$(uname -r) -type f -name '*.ko'
3. shell commands for kernel object called modules
     lsmod – List the currently loaded modules
     insmod <module_file> – Insert/Load the module specified by <module_file>
     modprobe <module> – Insert/Load the <module> along with its dependencies
     rmmod <module> – Remove/Unload the <module>
4. kernel message logging  :
            (log) ring buffer of the kernel.
            Depending on these log levels (i.e. the first 3 characters in the format string),
            the syslog daemon in the user space redirects the corresponding messages
            to their configured locations
                                          – a typical one being the log file /var/log/messages for all the log levels.
                                          –  serial port (/dev/ttyS0) or say all consoles

    - user-space utility ‘dmesg‘
    - why Linux kernel can be compiled only using gcc-based compilers – a close knit bond.
 5.

*/

#include <linux/module.h>
#include <linux/version.h>
#include <linux/kernel.h>
#include <linux/types.h>
//#include <linux/kdev.h>
#include <linux/fs.h>


static dev_t first; //Global variable for the first device number

static int __init ofd_init(void)
{
  int ret;
  printk(KERN_INFO "Namaskar: ofd registered \n");

  if(ret = alloc_chrdev_region(&first,0,3,"Shweta") < 0);
  {
    return ret;
  }

  printk(KERN_INFO "<Major,Minor>:<%d,%d>\n",MAJOR(first),MINOR(first));

  return 0;
}


static void __exit ofd_exit(void)
{
  unregister_chrdev_region(first,3);
  printk(KERN_INFO "ofcd unregistered");
}


module_init(ofd_init);
module_exit(ofd_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Chandan Kr Singh <singhchn08@gmail.com>");
MODULE_DESCRIPTION("Our First Driver");
