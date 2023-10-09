# basic_kernel_driver
This is a simple linux kernel device driver implementation.

Navigate to the project directory:\
**make**\
**insmod basic_kernel_driver.ko**\
**dmesg**

To view device driver information:\
**modinfo basic_kernel_driver.ko**

You should be able to see the welcome print messages in the kernel messages window.

**rmmod basic_kernel_driver**\
**dmesg**\
You shall see the exit print messages.
