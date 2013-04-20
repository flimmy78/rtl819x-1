/* This is a generated file, don't edit */

#define NUM_APPLETS 54

const char applet_names[] ALIGN1 = ""
"ash" "\0"
"basename" "\0"
"cat" "\0"
"chmod" "\0"
"clear" "\0"
"cp" "\0"
"date" "\0"
"df" "\0"
"dmesg" "\0"
"echo" "\0"
"flash_eraseall" "\0"
"flash_lock" "\0"
"flash_unlock" "\0"
"ftpput" "\0"
"halt" "\0"
"hwclock" "\0"
"ifconfig" "\0"
"init" "\0"
"insmod" "\0"
"kill" "\0"
"killall" "\0"
"klogd" "\0"
"ln" "\0"
"logger" "\0"
"logread" "\0"
"ls" "\0"
"lsmod" "\0"
"mkdir" "\0"
"mknod" "\0"
"mount" "\0"
"mv" "\0"
"pidof" "\0"
"ping" "\0"
"poweroff" "\0"
"ps" "\0"
"pwd" "\0"
"reboot" "\0"
"rm" "\0"
"rmmod" "\0"
"route" "\0"
"sh" "\0"
"sleep" "\0"
"switch_root" "\0"
"sync" "\0"
"syslogd" "\0"
"tar" "\0"
"touch" "\0"
"udhcpc" "\0"
"umount" "\0"
"uname" "\0"
"uptime" "\0"
"vconfig" "\0"
"watchdog" "\0"
"wget" "\0"
;

#ifndef SKIP_applet_main
int (*const applet_main[])(int argc, char **argv) = {
ash_main,
basename_main,
cat_main,
chmod_main,
clear_main,
cp_main,
date_main,
df_main,
dmesg_main,
echo_main,
flash_eraseall_main,
flash_lock_unlock_main,
flash_lock_unlock_main,
ftpgetput_main,
halt_main,
hwclock_main,
ifconfig_main,
init_main,
insmod_main,
kill_main,
kill_main,
klogd_main,
ln_main,
logger_main,
logread_main,
ls_main,
lsmod_main,
mkdir_main,
mknod_main,
mount_main,
mv_main,
pidof_main,
ping_main,
halt_main,
ps_main,
pwd_main,
halt_main,
rm_main,
rmmod_main,
route_main,
ash_main,
sleep_main,
switch_root_main,
sync_main,
syslogd_main,
tar_main,
touch_main,
udhcpc_main,
umount_main,
uname_main,
uptime_main,
vconfig_main,
watchdog_main,
wget_main,
};
#endif

const uint16_t applet_nameofs[] ALIGN2 = {
0x0000,
0x3004,
0x300d,
0x2011,
0x0017,
0x201d,
0x0020,
0x0025,
0x0028,
0x302e,
0x0033,
0x0042,
0x004d,
0x005a,
0x0061,
0x0066,
0x006e,
0x0077,
0x007c,
0x0083,
0x0088,
0x0090,
0x2096,
0x0099,
0x00a0,
0x20a8,
0x00ab,
0x30b1,
0x20b7,
0x00bd,
0x00c3,
0x00c6,
0x40cc,
0x00d1,
0x00da,
0x30dd,
0x00e1,
0x30e8,
0x00eb,
0x00f1,
0x00f7,
0x00fa,
0x0100,
0x310c,
0x0111,
0x0119,
0x311d,
0x0123,
0x012a,
0x0131,
0x0137,
0x013e,
0x0146,
0x014f,
};


#define MAX_APPLET_NAME_LEN 14
