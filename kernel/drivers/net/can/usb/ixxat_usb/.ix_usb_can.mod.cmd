cmd_/home/ubuntu/Libraries/IXXAT/USBToCAN/kernel/drivers/net/can/usb/ixxat_usb/ix_usb_can.mod := printf '%s\n'   ixxat_usb_cl1.o ixxat_usb_cl2.o ixxat_usb_core.o | awk '!x[$$0]++ { print("/home/ubuntu/Libraries/IXXAT/USBToCAN/kernel/drivers/net/can/usb/ixxat_usb/"$$0) }' > /home/ubuntu/Libraries/IXXAT/USBToCAN/kernel/drivers/net/can/usb/ixxat_usb/ix_usb_can.mod
