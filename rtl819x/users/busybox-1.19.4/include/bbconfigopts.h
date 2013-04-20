#ifndef _BBCONFIGOPTS_H
#define _BBCONFIGOPTS_H
/*
 * busybox configuration settings.
 *
 * Licensed under GPLv2 or later, see file LICENSE in this source tree.
 *
 * This file is generated automatically by scripts/mkconfigs.
 * Do not edit.
 */
static const char bbconfig_config[] ALIGN1 =
"CONFIG_HAVE_DOT_CONFIG=y\n"
"# CONFIG_DESKTOP is not set\n"
"# CONFIG_EXTRA_COMPAT is not set\n"
"CONFIG_INCLUDE_SUSv2=y\n"
"# CONFIG_USE_PORTABLE_CODE is not set\n"
"CONFIG_PLATFORM_LINUX=y\n"
"# CONFIG_FEATURE_BUFFERS_USE_MALLOC is not set\n"
"CONFIG_FEATURE_BUFFERS_GO_ON_STACK=y\n"
"# CONFIG_FEATURE_BUFFERS_GO_IN_BSS is not set\n"
"CONFIG_SHOW_USAGE=y\n"
"CONFIG_FEATURE_VERBOSE_USAGE=y\n"
"CONFIG_FEATURE_COMPRESS_USAGE=y\n"
"# CONFIG_FEATURE_INSTALLER is not set\n"
"# CONFIG_INSTALL_NO_USR is not set\n"
"# CONFIG_LOCALE_SUPPORT is not set\n"
"# CONFIG_UNICODE_SUPPORT is not set\n"
"# CONFIG_UNICODE_USING_LOCALE is not set\n"
"# CONFIG_FEATURE_CHECK_UNICODE_IN_ENV is not set\n"
"CONFIG_SUBST_WCHAR=0\n"
"CONFIG_LAST_SUPPORTED_WCHAR=0\n"
"# CONFIG_UNICODE_COMBINING_WCHARS is not set\n"
"# CONFIG_UNICODE_WIDE_WCHARS is not set\n"
"# CONFIG_UNICODE_BIDI_SUPPORT is not set\n"
"# CONFIG_UNICODE_NEUTRAL_TABLE is not set\n"
"# CONFIG_UNICODE_PRESERVE_BROKEN is not set\n"
"CONFIG_LONG_OPTS=y\n"
"CONFIG_FEATURE_DEVPTS=y\n"
"# CONFIG_FEATURE_CLEAN_UP is not set\n"
"# CONFIG_FEATURE_UTMP is not set\n"
"# CONFIG_FEATURE_WTMP is not set\n"
"CONFIG_FEATURE_PIDFILE=y\n"
"CONFIG_FEATURE_SUID=y\n"
"# CONFIG_FEATURE_SUID_CONFIG is not set\n"
"# CONFIG_FEATURE_SUID_CONFIG_QUIET is not set\n"
"# CONFIG_SELINUX is not set\n"
"CONFIG_FEATURE_PREFER_APPLETS=y\n"
"CONFIG_BUSYBOX_EXEC_PATH=\"/proc/self/exe\"\n"
"CONFIG_FEATURE_SYSLOG=y\n"
"# CONFIG_FEATURE_HAVE_RPC is not set\n"
"# CONFIG_STATIC is not set\n"
"# CONFIG_PIE is not set\n"
"# CONFIG_NOMMU is not set\n"
"# CONFIG_BUILD_LIBBUSYBOX is not set\n"
"# CONFIG_FEATURE_INDIVIDUAL is not set\n"
"# CONFIG_FEATURE_SHARED_BUSYBOX is not set\n"
"CONFIG_LFS=y\n"
"CONFIG_CROSS_COMPILER_PREFIX=\"\"\n"
"CONFIG_EXTRA_CFLAGS=\"\"\n"
"# CONFIG_DEBUG is not set\n"
"# CONFIG_DEBUG_PESSIMIZE is not set\n"
"# CONFIG_WERROR is not set\n"
"CONFIG_NO_DEBUG_LIB=y\n"
"# CONFIG_DMALLOC is not set\n"
"# CONFIG_EFENCE is not set\n"
"CONFIG_INSTALL_APPLET_SYMLINKS=y\n"
"# CONFIG_INSTALL_APPLET_HARDLINKS is not set\n"
"# CONFIG_INSTALL_APPLET_SCRIPT_WRAPPERS is not set\n"
"# CONFIG_INSTALL_APPLET_DONT is not set\n"
"# CONFIG_INSTALL_SH_APPLET_SYMLINK is not set\n"
"# CONFIG_INSTALL_SH_APPLET_HARDLINK is not set\n"
"# CONFIG_INSTALL_SH_APPLET_SCRIPT_WRAPPER is not set\n"
"CONFIG_PREFIX=\"./_install\"\n"
"# CONFIG_FEATURE_SYSTEMD is not set\n"
"# CONFIG_FEATURE_RTMINMAX is not set\n"
"CONFIG_PASSWORD_MINLEN=6\n"
"CONFIG_MD5_SIZE_VS_SPEED=2\n"
"CONFIG_FEATURE_FAST_TOP=y\n"
"# CONFIG_FEATURE_ETC_NETWORKS is not set\n"
"# CONFIG_FEATURE_USE_TERMIOS is not set\n"
"CONFIG_FEATURE_EDITING=y\n"
"CONFIG_FEATURE_EDITING_MAX_LEN=512\n"
"# CONFIG_FEATURE_EDITING_VI is not set\n"
"CONFIG_FEATURE_EDITING_HISTORY=256\n"
"# CONFIG_FEATURE_EDITING_SAVEHISTORY is not set\n"
"# CONFIG_FEATURE_REVERSE_SEARCH is not set\n"
"CONFIG_FEATURE_TAB_COMPLETION=y\n"
"# CONFIG_FEATURE_USERNAME_COMPLETION is not set\n"
"CONFIG_FEATURE_EDITING_FANCY_PROMPT=y\n"
"# CONFIG_FEATURE_EDITING_ASK_TERMINAL is not set\n"
"CONFIG_FEATURE_NON_POSIX_CP=y\n"
"# CONFIG_FEATURE_VERBOSE_CP_MESSAGE is not set\n"
"CONFIG_FEATURE_COPYBUF_KB=4\n"
"# CONFIG_FEATURE_SKIP_ROOTFS is not set\n"
"# CONFIG_MONOTONIC_SYSCALL is not set\n"
"CONFIG_IOCTL_HEX2STR_ERROR=y\n"
"# CONFIG_FEATURE_HWIB is not set\n"
"# CONFIG_FEATURE_SEAMLESS_XZ is not set\n"
"# CONFIG_FEATURE_SEAMLESS_LZMA is not set\n"
"# CONFIG_FEATURE_SEAMLESS_BZ2 is not set\n"
"CONFIG_FEATURE_SEAMLESS_GZ=y\n"
"# CONFIG_FEATURE_SEAMLESS_Z is not set\n"
"# CONFIG_AR is not set\n"
"# CONFIG_FEATURE_AR_LONG_FILENAMES is not set\n"
"# CONFIG_FEATURE_AR_CREATE is not set\n"
"# CONFIG_BUNZIP2 is not set\n"
"# CONFIG_BZIP2 is not set\n"
"# CONFIG_CPIO is not set\n"
"# CONFIG_FEATURE_CPIO_O is not set\n"
"# CONFIG_FEATURE_CPIO_P is not set\n"
"# CONFIG_DPKG is not set\n"
"# CONFIG_DPKG_DEB is not set\n"
"# CONFIG_FEATURE_DPKG_DEB_EXTRACT_ONLY is not set\n"
"# CONFIG_GUNZIP is not set\n"
"# CONFIG_GZIP is not set\n"
"# CONFIG_FEATURE_GZIP_LONG_OPTIONS is not set\n"
"# CONFIG_LZOP is not set\n"
"# CONFIG_LZOP_COMPR_HIGH is not set\n"
"# CONFIG_RPM2CPIO is not set\n"
"# CONFIG_RPM is not set\n"
"CONFIG_TAR=y\n"
"CONFIG_FEATURE_TAR_CREATE=y\n"
"CONFIG_FEATURE_TAR_AUTODETECT=y\n"
"CONFIG_FEATURE_TAR_FROM=y\n"
"CONFIG_FEATURE_TAR_OLDGNU_COMPATIBILITY=y\n"
"CONFIG_FEATURE_TAR_OLDSUN_COMPATIBILITY=y\n"
"CONFIG_FEATURE_TAR_GNU_EXTENSIONS=y\n"
"CONFIG_FEATURE_TAR_LONG_OPTIONS=y\n"
"CONFIG_FEATURE_TAR_TO_COMMAND=y\n"
"CONFIG_FEATURE_TAR_UNAME_GNAME=y\n"
"CONFIG_FEATURE_TAR_NOPRESERVE_TIME=y\n"
"# CONFIG_FEATURE_TAR_SELINUX is not set\n"
"# CONFIG_UNCOMPRESS is not set\n"
"# CONFIG_UNLZMA is not set\n"
"# CONFIG_FEATURE_LZMA_FAST is not set\n"
"# CONFIG_LZMA is not set\n"
"# CONFIG_UNXZ is not set\n"
"# CONFIG_XZ is not set\n"
"# CONFIG_UNZIP is not set\n"
"CONFIG_BASENAME=y\n"
"CONFIG_CAT=y\n"
"CONFIG_DATE=y\n"
"CONFIG_FEATURE_DATE_ISOFMT=y\n"
"# CONFIG_FEATURE_DATE_NANO is not set\n"
"# CONFIG_FEATURE_DATE_COMPAT is not set\n"
"# CONFIG_ID is not set\n"
"# CONFIG_GROUPS is not set\n"
"# CONFIG_TEST is not set\n"
"# CONFIG_FEATURE_TEST_64 is not set\n"
"CONFIG_TOUCH=y\n"
"# CONFIG_TR is not set\n"
"# CONFIG_FEATURE_TR_CLASSES is not set\n"
"# CONFIG_FEATURE_TR_EQUIV is not set\n"
"# CONFIG_BASE64 is not set\n"
"# CONFIG_WHO is not set\n"
"# CONFIG_USERS is not set\n"
"# CONFIG_CAL is not set\n"
"# CONFIG_CATV is not set\n"
"# CONFIG_CHGRP is not set\n"
"CONFIG_CHMOD=y\n"
"# CONFIG_CHOWN is not set\n"
"# CONFIG_FEATURE_CHOWN_LONG_OPTIONS is not set\n"
"# CONFIG_CHROOT is not set\n"
"# CONFIG_CKSUM is not set\n"
"# CONFIG_COMM is not set\n"
"CONFIG_CP=y\n"
"# CONFIG_FEATURE_CP_LONG_OPTIONS is not set\n"
"# CONFIG_CUT is not set\n"
"# CONFIG_DD is not set\n"
"# CONFIG_FEATURE_DD_SIGNAL_HANDLING is not set\n"
"# CONFIG_FEATURE_DD_THIRD_STATUS_LINE is not set\n"
"# CONFIG_FEATURE_DD_IBS_OBS is not set\n"
"CONFIG_DF=y\n"
"# CONFIG_FEATURE_DF_FANCY is not set\n"
"# CONFIG_DIRNAME is not set\n"
"# CONFIG_DOS2UNIX is not set\n"
"# CONFIG_UNIX2DOS is not set\n"
"# CONFIG_DU is not set\n"
"# CONFIG_FEATURE_DU_DEFAULT_BLOCKSIZE_1K is not set\n"
"CONFIG_ECHO=y\n"
"CONFIG_FEATURE_FANCY_ECHO=y\n"
"# CONFIG_ENV is not set\n"
"# CONFIG_FEATURE_ENV_LONG_OPTIONS is not set\n"
"# CONFIG_EXPAND is not set\n"
"# CONFIG_FEATURE_EXPAND_LONG_OPTIONS is not set\n"
"# CONFIG_EXPR is not set\n"
"# CONFIG_EXPR_MATH_SUPPORT_64 is not set\n"
"# CONFIG_FALSE is not set\n"
"# CONFIG_FOLD is not set\n"
"# CONFIG_FSYNC is not set\n"
"# CONFIG_HEAD is not set\n"
"# CONFIG_FEATURE_FANCY_HEAD is not set\n"
"# CONFIG_HOSTID is not set\n"
"# CONFIG_INSTALL is not set\n"
"# CONFIG_FEATURE_INSTALL_LONG_OPTIONS is not set\n"
"CONFIG_LN=y\n"
"# CONFIG_LOGNAME is not set\n"
"CONFIG_LS=y\n"
"# CONFIG_FEATURE_LS_FILETYPES is not set\n"
"# CONFIG_FEATURE_LS_FOLLOWLINKS is not set\n"
"# CONFIG_FEATURE_LS_RECURSIVE is not set\n"
"# CONFIG_FEATURE_LS_SORTFILES is not set\n"
"CONFIG_FEATURE_LS_TIMESTAMPS=y\n"
"CONFIG_FEATURE_LS_USERNAME=y\n"
"# CONFIG_FEATURE_LS_COLOR is not set\n"
"# CONFIG_FEATURE_LS_COLOR_IS_DEFAULT is not set\n"
"# CONFIG_MD5SUM is not set\n"
"CONFIG_MKDIR=y\n"
"# CONFIG_FEATURE_MKDIR_LONG_OPTIONS is not set\n"
"# CONFIG_MKFIFO is not set\n"
"CONFIG_MKNOD=y\n"
"CONFIG_MV=y\n"
"# CONFIG_FEATURE_MV_LONG_OPTIONS is not set\n"
"# CONFIG_NICE is not set\n"
"# CONFIG_NOHUP is not set\n"
"# CONFIG_OD is not set\n"
"# CONFIG_PRINTENV is not set\n"
"# CONFIG_PRINTF is not set\n"
"CONFIG_PWD=y\n"
"# CONFIG_READLINK is not set\n"
"# CONFIG_FEATURE_READLINK_FOLLOW is not set\n"
"# CONFIG_REALPATH is not set\n"
"CONFIG_RM=y\n"
"# CONFIG_RMDIR is not set\n"
"# CONFIG_FEATURE_RMDIR_LONG_OPTIONS is not set\n"
"# CONFIG_SEQ is not set\n"
"# CONFIG_SHA1SUM is not set\n"
"# CONFIG_SHA256SUM is not set\n"
"# CONFIG_SHA512SUM is not set\n"
"CONFIG_SLEEP=y\n"
"CONFIG_FEATURE_FANCY_SLEEP=y\n"
"# CONFIG_FEATURE_FLOAT_SLEEP is not set\n"
"# CONFIG_SORT is not set\n"
"# CONFIG_FEATURE_SORT_BIG is not set\n"
"# CONFIG_SPLIT is not set\n"
"# CONFIG_FEATURE_SPLIT_FANCY is not set\n"
"# CONFIG_STAT is not set\n"
"# CONFIG_FEATURE_STAT_FORMAT is not set\n"
"# CONFIG_STTY is not set\n"
"# CONFIG_SUM is not set\n"
"CONFIG_SYNC=y\n"
"# CONFIG_TAC is not set\n"
"# CONFIG_TAIL is not set\n"
"# CONFIG_FEATURE_FANCY_TAIL is not set\n"
"# CONFIG_TEE is not set\n"
"# CONFIG_FEATURE_TEE_USE_BLOCK_IO is not set\n"
"# CONFIG_TRUE is not set\n"
"# CONFIG_TTY is not set\n"
"CONFIG_UNAME=y\n"
"# CONFIG_UNEXPAND is not set\n"
"# CONFIG_FEATURE_UNEXPAND_LONG_OPTIONS is not set\n"
"# CONFIG_UNIQ is not set\n"
"# CONFIG_USLEEP is not set\n"
"# CONFIG_UUDECODE is not set\n"
"# CONFIG_UUENCODE is not set\n"
"# CONFIG_WC is not set\n"
"# CONFIG_FEATURE_WC_LARGE is not set\n"
"# CONFIG_WHOAMI is not set\n"
"# CONFIG_YES is not set\n"
"CONFIG_FEATURE_PRESERVE_HARDLINKS=y\n"
"CONFIG_FEATURE_AUTOWIDTH=y\n"
"CONFIG_FEATURE_HUMAN_READABLE=y\n"
"# CONFIG_FEATURE_MD5_SHA1_SUM_CHECK is not set\n"
"# CONFIG_CHVT is not set\n"
"# CONFIG_FGCONSOLE is not set\n"
"CONFIG_CLEAR=y\n"
"# CONFIG_DEALLOCVT is not set\n"
"# CONFIG_DUMPKMAP is not set\n"
"# CONFIG_KBD_MODE is not set\n"
"# CONFIG_LOADFONT is not set\n"
"# CONFIG_LOADKMAP is not set\n"
"# CONFIG_OPENVT is not set\n"
"# CONFIG_RESET is not set\n"
"# CONFIG_RESIZE is not set\n"
"# CONFIG_FEATURE_RESIZE_PRINT is not set\n"
"# CONFIG_SETCONSOLE is not set\n"
"# CONFIG_FEATURE_SETCONSOLE_LONG_OPTIONS is not set\n"
"# CONFIG_SETFONT is not set\n"
"# CONFIG_FEATURE_SETFONT_TEXTUAL_MAP is not set\n"
"CONFIG_DEFAULT_SETFONT_DIR=\"\"\n"
"# CONFIG_SETKEYCODES is not set\n"
"# CONFIG_SETLOGCONS is not set\n"
"# CONFIG_SHOWKEY is not set\n"
"# CONFIG_FEATURE_LOADFONT_PSF2 is not set\n"
"# CONFIG_FEATURE_LOADFONT_RAW is not set\n"
"# CONFIG_MKTEMP is not set\n"
"# CONFIG_PIPE_PROGRESS is not set\n"
"# CONFIG_RUN_PARTS is not set\n"
"# CONFIG_FEATURE_RUN_PARTS_LONG_OPTIONS is not set\n"
"# CONFIG_FEATURE_RUN_PARTS_FANCY is not set\n"
"# CONFIG_START_STOP_DAEMON is not set\n"
"# CONFIG_FEATURE_START_STOP_DAEMON_FANCY is not set\n"
"# CONFIG_FEATURE_START_STOP_DAEMON_LONG_OPTIONS is not set\n"
"# CONFIG_WHICH is not set\n"
"# CONFIG_PATCH is not set\n"
"# CONFIG_VI is not set\n"
"CONFIG_FEATURE_VI_MAX_LEN=0\n"
"# CONFIG_FEATURE_VI_8BIT is not set\n"
"# CONFIG_FEATURE_VI_COLON is not set\n"
"# CONFIG_FEATURE_VI_YANKMARK is not set\n"
"# CONFIG_FEATURE_VI_SEARCH is not set\n"
"# CONFIG_FEATURE_VI_REGEX_SEARCH is not set\n"
"# CONFIG_FEATURE_VI_USE_SIGNALS is not set\n"
"# CONFIG_FEATURE_VI_DOT_CMD is not set\n"
"# CONFIG_FEATURE_VI_READONLY is not set\n"
"# CONFIG_FEATURE_VI_SETOPTS is not set\n"
"# CONFIG_FEATURE_VI_SET is not set\n"
"# CONFIG_FEATURE_VI_WIN_RESIZE is not set\n"
"# CONFIG_FEATURE_VI_ASK_TERMINAL is not set\n"
"# CONFIG_FEATURE_VI_OPTIMIZE_CURSOR is not set\n"
"# CONFIG_AWK is not set\n"
"# CONFIG_FEATURE_AWK_LIBM is not set\n"
"# CONFIG_CMP is not set\n"
"# CONFIG_DIFF is not set\n"
"# CONFIG_FEATURE_DIFF_LONG_OPTIONS is not set\n"
"# CONFIG_FEATURE_DIFF_DIR is not set\n"
"# CONFIG_ED is not set\n"
"# CONFIG_SED is not set\n"
"# CONFIG_FEATURE_ALLOW_EXEC is not set\n"
"# CONFIG_FIND is not set\n"
"# CONFIG_FEATURE_FIND_PRINT0 is not set\n"
"# CONFIG_FEATURE_FIND_MTIME is not set\n"
"# CONFIG_FEATURE_FIND_MMIN is not set\n"
"# CONFIG_FEATURE_FIND_PERM is not set\n"
"# CONFIG_FEATURE_FIND_TYPE is not set\n"
"# CONFIG_FEATURE_FIND_XDEV is not set\n"
"# CONFIG_FEATURE_FIND_MAXDEPTH is not set\n"
"# CONFIG_FEATURE_FIND_NEWER is not set\n"
"# CONFIG_FEATURE_FIND_INUM is not set\n"
"# CONFIG_FEATURE_FIND_EXEC is not set\n"
"# CONFIG_FEATURE_FIND_USER is not set\n"
"# CONFIG_FEATURE_FIND_GROUP is not set\n"
"# CONFIG_FEATURE_FIND_NOT is not set\n"
"# CONFIG_FEATURE_FIND_DEPTH is not set\n"
"# CONFIG_FEATURE_FIND_PAREN is not set\n"
"# CONFIG_FEATURE_FIND_SIZE is not set\n"
"# CONFIG_FEATURE_FIND_PRUNE is not set\n"
"# CONFIG_FEATURE_FIND_DELETE is not set\n"
"# CONFIG_FEATURE_FIND_PATH is not set\n"
"# CONFIG_FEATURE_FIND_REGEX is not set\n"
"# CONFIG_FEATURE_FIND_CONTEXT is not set\n"
"# CONFIG_FEATURE_FIND_LINKS is not set\n"
"# CONFIG_GREP is not set\n"
"# CONFIG_FEATURE_GREP_EGREP_ALIAS is not set\n"
"# CONFIG_FEATURE_GREP_FGREP_ALIAS is not set\n"
"# CONFIG_FEATURE_GREP_CONTEXT is not set\n"
"# CONFIG_XARGS is not set\n"
"# CONFIG_FEATURE_XARGS_SUPPORT_CONFIRMATION is not set\n"
"# CONFIG_FEATURE_XARGS_SUPPORT_QUOTES is not set\n"
"# CONFIG_FEATURE_XARGS_SUPPORT_TERMOPT is not set\n"
"# CONFIG_FEATURE_XARGS_SUPPORT_ZERO_TERM is not set\n"
"# CONFIG_BOOTCHARTD is not set\n"
"# CONFIG_FEATURE_BOOTCHARTD_BLOATED_HEADER is not set\n"
"# CONFIG_FEATURE_BOOTCHARTD_CONFIG_FILE is not set\n"
"CONFIG_HALT=y\n"
"# CONFIG_FEATURE_CALL_TELINIT is not set\n"
"CONFIG_TELINIT_PATH=\"\"\n"
"CONFIG_INIT=y\n"
"CONFIG_FEATURE_USE_INITTAB=y\n"
"# CONFIG_FEATURE_KILL_REMOVED is not set\n"
"CONFIG_FEATURE_KILL_DELAY=0\n"
"# CONFIG_FEATURE_INIT_SCTTY is not set\n"
"CONFIG_FEATURE_INIT_SYSLOG=y\n"
"# CONFIG_FEATURE_EXTRA_QUIET is not set\n"
"# CONFIG_FEATURE_INIT_COREDUMPS is not set\n"
"# CONFIG_FEATURE_INITRD is not set\n"
"CONFIG_INIT_TERMINAL_TYPE=\"linux\"\n"
"# CONFIG_MESG is not set\n"
"# CONFIG_FEATURE_MESG_ENABLE_ONLY_GROUP is not set\n"
"# CONFIG_ADD_SHELL is not set\n"
"# CONFIG_REMOVE_SHELL is not set\n"
"# CONFIG_FEATURE_SHADOWPASSWDS is not set\n"
"# CONFIG_USE_BB_PWD_GRP is not set\n"
"# CONFIG_USE_BB_SHADOW is not set\n"
"# CONFIG_USE_BB_CRYPT is not set\n"
"# CONFIG_USE_BB_CRYPT_SHA is not set\n"
"# CONFIG_ADDUSER is not set\n"
"# CONFIG_FEATURE_ADDUSER_LONG_OPTIONS is not set\n"
"# CONFIG_FEATURE_CHECK_NAMES is not set\n"
"CONFIG_FIRST_SYSTEM_ID=0\n"
"CONFIG_LAST_SYSTEM_ID=0\n"
"# CONFIG_ADDGROUP is not set\n"
"# CONFIG_FEATURE_ADDGROUP_LONG_OPTIONS is not set\n"
"# CONFIG_FEATURE_ADDUSER_TO_GROUP is not set\n"
"# CONFIG_DELUSER is not set\n"
"# CONFIG_DELGROUP is not set\n"
"# CONFIG_FEATURE_DEL_USER_FROM_GROUP is not set\n"
"# CONFIG_GETTY is not set\n"
"# CONFIG_LOGIN is not set\n"
"# CONFIG_PAM is not set\n"
"# CONFIG_LOGIN_SCRIPTS is not set\n"
"# CONFIG_FEATURE_NOLOGIN is not set\n"
"# CONFIG_FEATURE_SECURETTY is not set\n"
"# CONFIG_PASSWD is not set\n"
"# CONFIG_FEATURE_PASSWD_WEAK_CHECK is not set\n"
"# CONFIG_CRYPTPW is not set\n"
"# CONFIG_CHPASSWD is not set\n"
"# CONFIG_SU is not set\n"
"# CONFIG_FEATURE_SU_SYSLOG is not set\n"
"# CONFIG_FEATURE_SU_CHECKS_SHELLS is not set\n"
"# CONFIG_SULOGIN is not set\n"
"# CONFIG_VLOCK is not set\n"
"# CONFIG_CHATTR is not set\n"
"# CONFIG_FSCK is not set\n"
"# CONFIG_LSATTR is not set\n"
"# CONFIG_TUNE2FS is not set\n"
"# CONFIG_MODINFO is not set\n"
"# CONFIG_MODPROBE_SMALL is not set\n"
"# CONFIG_FEATURE_MODPROBE_SMALL_OPTIONS_ON_CMDLINE is not set\n"
"# CONFIG_FEATURE_MODPROBE_SMALL_CHECK_ALREADY_LOADED is not set\n"
"CONFIG_INSMOD=y\n"
"CONFIG_RMMOD=y\n"
"CONFIG_LSMOD=y\n"
"CONFIG_FEATURE_LSMOD_PRETTY_2_6_OUTPUT=y\n"
"# CONFIG_MODPROBE is not set\n"
"# CONFIG_FEATURE_MODPROBE_BLACKLIST is not set\n"
"# CONFIG_DEPMOD is not set\n"
"# CONFIG_FEATURE_2_4_MODULES is not set\n"
"# CONFIG_FEATURE_INSMOD_TRY_MMAP is not set\n"
"# CONFIG_FEATURE_INSMOD_VERSION_CHECKING is not set\n"
"# CONFIG_FEATURE_INSMOD_KSYMOOPS_SYMBOLS is not set\n"
"# CONFIG_FEATURE_INSMOD_LOADINKMEM is not set\n"
"# CONFIG_FEATURE_INSMOD_LOAD_MAP is not set\n"
"# CONFIG_FEATURE_INSMOD_LOAD_MAP_FULL is not set\n"
"CONFIG_FEATURE_CHECK_TAINTED_MODULE=y\n"
"# CONFIG_FEATURE_MODUTILS_ALIAS is not set\n"
"# CONFIG_FEATURE_MODUTILS_SYMBOLS is not set\n"
"CONFIG_DEFAULT_MODULES_DIR=\"/lib/modules\"\n"
"CONFIG_DEFAULT_DEPMOD_FILE=\"\"\n"
"# CONFIG_BLOCKDEV is not set\n"
"# CONFIG_REV is not set\n"
"# CONFIG_ACPID is not set\n"
"# CONFIG_FEATURE_ACPID_COMPAT is not set\n"
"# CONFIG_BLKID is not set\n"
"# CONFIG_FEATURE_BLKID_TYPE is not set\n"
"CONFIG_DMESG=y\n"
"CONFIG_FEATURE_DMESG_PRETTY=y\n"
"# CONFIG_FBSET is not set\n"
"# CONFIG_FEATURE_FBSET_FANCY is not set\n"
"# CONFIG_FEATURE_FBSET_READMODE is not set\n"
"# CONFIG_FDFLUSH is not set\n"
"# CONFIG_FDFORMAT is not set\n"
"# CONFIG_FDISK is not set\n"
"# CONFIG_FDISK_SUPPORT_LARGE_DISKS is not set\n"
"# CONFIG_FEATURE_FDISK_WRITABLE is not set\n"
"# CONFIG_FEATURE_AIX_LABEL is not set\n"
"# CONFIG_FEATURE_SGI_LABEL is not set\n"
"# CONFIG_FEATURE_SUN_LABEL is not set\n"
"# CONFIG_FEATURE_OSF_LABEL is not set\n"
"# CONFIG_FEATURE_GPT_LABEL is not set\n"
"# CONFIG_FEATURE_FDISK_ADVANCED is not set\n"
"# CONFIG_FINDFS is not set\n"
"# CONFIG_FLOCK is not set\n"
"# CONFIG_FREERAMDISK is not set\n"
"# CONFIG_FSCK_MINIX is not set\n"
"# CONFIG_MKFS_EXT2 is not set\n"
"# CONFIG_MKFS_MINIX is not set\n"
"# CONFIG_FEATURE_MINIX2 is not set\n"
"# CONFIG_MKFS_REISER is not set\n"
"# CONFIG_MKFS_VFAT is not set\n"
"# CONFIG_GETOPT is not set\n"
"# CONFIG_FEATURE_GETOPT_LONG is not set\n"
"# CONFIG_HEXDUMP is not set\n"
"# CONFIG_FEATURE_HEXDUMP_REVERSE is not set\n"
"# CONFIG_HD is not set\n"
"CONFIG_HWCLOCK=y\n"
"# CONFIG_FEATURE_HWCLOCK_LONG_OPTIONS is not set\n"
"# CONFIG_FEATURE_HWCLOCK_ADJTIME_FHS is not set\n"
"# CONFIG_IPCRM is not set\n"
"# CONFIG_IPCS is not set\n"
"# CONFIG_LOSETUP is not set\n"
"# CONFIG_LSPCI is not set\n"
"# CONFIG_LSUSB is not set\n"
"# CONFIG_MDEV is not set\n"
"# CONFIG_FEATURE_MDEV_CONF is not set\n"
"# CONFIG_FEATURE_MDEV_RENAME is not set\n"
"# CONFIG_FEATURE_MDEV_RENAME_REGEXP is not set\n"
"# CONFIG_FEATURE_MDEV_EXEC is not set\n"
"# CONFIG_FEATURE_MDEV_LOAD_FIRMWARE is not set\n"
"# CONFIG_MKSWAP is not set\n"
"# CONFIG_FEATURE_MKSWAP_UUID is not set\n"
"# CONFIG_MORE is not set\n"
"CONFIG_MOUNT=y\n"
"# CONFIG_FEATURE_MOUNT_FAKE is not set\n"
"# CONFIG_FEATURE_MOUNT_VERBOSE is not set\n"
"CONFIG_FEATURE_MOUNT_HELPERS=y\n"
"# CONFIG_FEATURE_MOUNT_LABEL is not set\n"
"# CONFIG_FEATURE_MOUNT_NFS is not set\n"
"CONFIG_FEATURE_MOUNT_CIFS=y\n"
"CONFIG_FEATURE_MOUNT_FLAGS=y\n"
"CONFIG_FEATURE_MOUNT_FSTAB=y\n"
"# CONFIG_PIVOT_ROOT is not set\n"
"# CONFIG_RDATE is not set\n"
"# CONFIG_RDEV is not set\n"
"# CONFIG_READPROFILE is not set\n"
"# CONFIG_RTCWAKE is not set\n"
"# CONFIG_SCRIPT is not set\n"
"# CONFIG_SCRIPTREPLAY is not set\n"
"# CONFIG_SETARCH is not set\n"
"# CONFIG_SWAPONOFF is not set\n"
"# CONFIG_FEATURE_SWAPON_PRI is not set\n"
"CONFIG_SWITCH_ROOT=y\n"
"CONFIG_UMOUNT=y\n"
"CONFIG_FEATURE_UMOUNT_ALL=y\n"
"CONFIG_FEATURE_MOUNT_LOOP=y\n"
"# CONFIG_FEATURE_MOUNT_LOOP_CREATE is not set\n"
"# CONFIG_FEATURE_MTAB_SUPPORT is not set\n"
"# CONFIG_VOLUMEID is not set\n"
"# CONFIG_FEATURE_VOLUMEID_EXT is not set\n"
"# CONFIG_FEATURE_VOLUMEID_BTRFS is not set\n"
"# CONFIG_FEATURE_VOLUMEID_REISERFS is not set\n"
"# CONFIG_FEATURE_VOLUMEID_FAT is not set\n"
"# CONFIG_FEATURE_VOLUMEID_HFS is not set\n"
"# CONFIG_FEATURE_VOLUMEID_JFS is not set\n"
"# CONFIG_FEATURE_VOLUMEID_XFS is not set\n"
"# CONFIG_FEATURE_VOLUMEID_NTFS is not set\n"
"# CONFIG_FEATURE_VOLUMEID_ISO9660 is not set\n"
"# CONFIG_FEATURE_VOLUMEID_UDF is not set\n"
"# CONFIG_FEATURE_VOLUMEID_LUKS is not set\n"
"# CONFIG_FEATURE_VOLUMEID_LINUXSWAP is not set\n"
"# CONFIG_FEATURE_VOLUMEID_CRAMFS is not set\n"
"# CONFIG_FEATURE_VOLUMEID_ROMFS is not set\n"
"# CONFIG_FEATURE_VOLUMEID_SYSV is not set\n"
"# CONFIG_FEATURE_VOLUMEID_OCFS2 is not set\n"
"# CONFIG_FEATURE_VOLUMEID_LINUXRAID is not set\n"
"# CONFIG_CONSPY is not set\n"
"# CONFIG_LESS is not set\n"
"CONFIG_FEATURE_LESS_MAXLINES=0\n"
"# CONFIG_FEATURE_LESS_BRACKETS is not set\n"
"# CONFIG_FEATURE_LESS_FLAGS is not set\n"
"# CONFIG_FEATURE_LESS_MARKS is not set\n"
"# CONFIG_FEATURE_LESS_REGEXP is not set\n"
"# CONFIG_FEATURE_LESS_WINCH is not set\n"
"# CONFIG_FEATURE_LESS_ASK_TERMINAL is not set\n"
"# CONFIG_FEATURE_LESS_DASHCMD is not set\n"
"# CONFIG_FEATURE_LESS_LINENUMS is not set\n"
"# CONFIG_NANDWRITE is not set\n"
"# CONFIG_NANDDUMP is not set\n"
"# CONFIG_SETSERIAL is not set\n"
"# CONFIG_UBIATTACH is not set\n"
"# CONFIG_UBIDETACH is not set\n"
"# CONFIG_UBIMKVOL is not set\n"
"# CONFIG_UBIRMVOL is not set\n"
"# CONFIG_UBIRSVOL is not set\n"
"# CONFIG_UBIUPDATEVOL is not set\n"
"# CONFIG_ADJTIMEX is not set\n"
"# CONFIG_BBCONFIG is not set\n"
"# CONFIG_FEATURE_COMPRESS_BBCONFIG is not set\n"
"# CONFIG_BEEP is not set\n"
"CONFIG_FEATURE_BEEP_FREQ=0\n"
"CONFIG_FEATURE_BEEP_LENGTH_MS=0\n"
"# CONFIG_CHAT is not set\n"
"# CONFIG_FEATURE_CHAT_NOFAIL is not set\n"
"# CONFIG_FEATURE_CHAT_TTY_HIFI is not set\n"
"# CONFIG_FEATURE_CHAT_IMPLICIT_CR is not set\n"
"# CONFIG_FEATURE_CHAT_SWALLOW_OPTS is not set\n"
"# CONFIG_FEATURE_CHAT_SEND_ESCAPES is not set\n"
"# CONFIG_FEATURE_CHAT_VAR_ABORT_LEN is not set\n"
"# CONFIG_FEATURE_CHAT_CLR_ABORT is not set\n"
"# CONFIG_CHRT is not set\n"
"# CONFIG_CROND is not set\n"
"# CONFIG_FEATURE_CROND_D is not set\n"
"# CONFIG_FEATURE_CROND_CALL_SENDMAIL is not set\n"
"CONFIG_FEATURE_CROND_DIR=\"\"\n"
"# CONFIG_CRONTAB is not set\n"
"# CONFIG_DC is not set\n"
"# CONFIG_FEATURE_DC_LIBM is not set\n"
"# CONFIG_DEVFSD is not set\n"
"# CONFIG_DEVFSD_MODLOAD is not set\n"
"# CONFIG_DEVFSD_FG_NP is not set\n"
"# CONFIG_DEVFSD_VERBOSE is not set\n"
"# CONFIG_FEATURE_DEVFS is not set\n"
"# CONFIG_DEVMEM is not set\n"
"# CONFIG_EJECT is not set\n"
"# CONFIG_FEATURE_EJECT_SCSI is not set\n"
"# CONFIG_FBSPLASH is not set\n"
"# CONFIG_FLASHCP is not set\n"
"CONFIG_FLASH_LOCK=y\n"
"CONFIG_FLASH_UNLOCK=y\n"
"CONFIG_FLASH_ERASEALL=y\n"
"# CONFIG_IONICE is not set\n"
"# CONFIG_INOTIFYD is not set\n"
"# CONFIG_LAST is not set\n"
"# CONFIG_FEATURE_LAST_SMALL is not set\n"
"# CONFIG_FEATURE_LAST_FANCY is not set\n"
"# CONFIG_HDPARM is not set\n"
"# CONFIG_FEATURE_HDPARM_GET_IDENTITY is not set\n"
"# CONFIG_FEATURE_HDPARM_HDIO_SCAN_HWIF is not set\n"
"# CONFIG_FEATURE_HDPARM_HDIO_UNREGISTER_HWIF is not set\n"
"# CONFIG_FEATURE_HDPARM_HDIO_DRIVE_RESET is not set\n"
"# CONFIG_FEATURE_HDPARM_HDIO_TRISTATE_HWIF is not set\n"
"# CONFIG_FEATURE_HDPARM_HDIO_GETSET_DMA is not set\n"
"# CONFIG_LOCK is not set\n"
"# CONFIG_MAKEDEVS is not set\n"
"# CONFIG_FEATURE_MAKEDEVS_LEAF is not set\n"
"# CONFIG_FEATURE_MAKEDEVS_TABLE is not set\n"
"# CONFIG_MAN is not set\n"
"# CONFIG_MICROCOM is not set\n"
"# CONFIG_MOUNTPOINT is not set\n"
"# CONFIG_MT is not set\n"
"# CONFIG_RAIDAUTORUN is not set\n"
"# CONFIG_READAHEAD is not set\n"
"# CONFIG_RFKILL is not set\n"
"# CONFIG_RUNLEVEL is not set\n"
"# CONFIG_RX is not set\n"
"# CONFIG_SETSID is not set\n"
"# CONFIG_STRINGS is not set\n"
"# CONFIG_TASKSET is not set\n"
"# CONFIG_FEATURE_TASKSET_FANCY is not set\n"
"# CONFIG_TIME is not set\n"
"# CONFIG_TIMEOUT is not set\n"
"# CONFIG_TTYSIZE is not set\n"
"# CONFIG_VOLNAME is not set\n"
"# CONFIG_WALL is not set\n"
"CONFIG_WATCHDOG=y\n"
"# CONFIG_NAMEIF is not set\n"
"# CONFIG_FEATURE_NAMEIF_EXTENDED is not set\n"
"# CONFIG_NBDCLIENT is not set\n"
"# CONFIG_NC is not set\n"
"# CONFIG_NC_SERVER is not set\n"
"# CONFIG_NC_EXTRA is not set\n"
"# CONFIG_NC_110_COMPAT is not set\n"
"CONFIG_PING=y\n"
"# CONFIG_PING6 is not set\n"
"CONFIG_FEATURE_FANCY_PING=y\n"
"# CONFIG_WHOIS is not set\n"
"# CONFIG_FEATURE_IPV6 is not set\n"
"# CONFIG_FEATURE_UNIX_LOCAL is not set\n"
"# CONFIG_FEATURE_PREFER_IPV4_ADDRESS is not set\n"
"# CONFIG_VERBOSE_RESOLUTION_ERRORS is not set\n"
"# CONFIG_ARP is not set\n"
"# CONFIG_ARPING is not set\n"
"# CONFIG_BRCTL is not set\n"
"# CONFIG_FEATURE_BRCTL_FANCY is not set\n"
"# CONFIG_FEATURE_BRCTL_SHOW is not set\n"
"# CONFIG_DNSD is not set\n"
"# CONFIG_ETHER_WAKE is not set\n"
"# CONFIG_FAKEIDENTD is not set\n"
"# CONFIG_FTPD is not set\n"
"# CONFIG_FEATURE_FTP_WRITE is not set\n"
"# CONFIG_FEATURE_FTPD_ACCEPT_BROKEN_LIST is not set\n"
"# CONFIG_FTPGET is not set\n"
"CONFIG_FTPPUT=y\n"
"CONFIG_FEATURE_FTPGETPUT_LONG_OPTIONS=y\n"
"# CONFIG_HOSTNAME is not set\n"
"# CONFIG_HTTPD is not set\n"
"# CONFIG_FEATURE_HTTPD_RANGES is not set\n"
"# CONFIG_FEATURE_HTTPD_USE_SENDFILE is not set\n"
"# CONFIG_FEATURE_HTTPD_SETUID is not set\n"
"# CONFIG_FEATURE_HTTPD_BASIC_AUTH is not set\n"
"# CONFIG_FEATURE_HTTPD_AUTH_MD5 is not set\n"
"# CONFIG_FEATURE_HTTPD_CGI is not set\n"
"# CONFIG_FEATURE_HTTPD_CONFIG_WITH_SCRIPT_INTERPR is not set\n"
"# CONFIG_FEATURE_HTTPD_SET_REMOTE_PORT_TO_ENV is not set\n"
"# CONFIG_FEATURE_HTTPD_ENCODE_URL_STR is not set\n"
"# CONFIG_FEATURE_HTTPD_ERROR_PAGES is not set\n"
"# CONFIG_FEATURE_HTTPD_PROXY is not set\n"
"# CONFIG_FEATURE_HTTPD_GZIP is not set\n"
"CONFIG_IFCONFIG=y\n"
"CONFIG_FEATURE_IFCONFIG_STATUS=y\n"
"# CONFIG_FEATURE_IFCONFIG_SLIP is not set\n"
"# CONFIG_FEATURE_IFCONFIG_MEMSTART_IOADDR_IRQ is not set\n"
"CONFIG_FEATURE_IFCONFIG_HW=y\n"
"CONFIG_FEATURE_IFCONFIG_BROADCAST_PLUS=y\n"
"# CONFIG_IFENSLAVE is not set\n"
"# CONFIG_IFPLUGD is not set\n"
"# CONFIG_IFUPDOWN is not set\n"
"CONFIG_IFUPDOWN_IFSTATE_PATH=\"\"\n"
"# CONFIG_FEATURE_IFUPDOWN_IP is not set\n"
"# CONFIG_FEATURE_IFUPDOWN_IP_BUILTIN is not set\n"
"# CONFIG_FEATURE_IFUPDOWN_IFCONFIG_BUILTIN is not set\n"
"# CONFIG_FEATURE_IFUPDOWN_IPV4 is not set\n"
"# CONFIG_FEATURE_IFUPDOWN_IPV6 is not set\n"
"# CONFIG_FEATURE_IFUPDOWN_MAPPING is not set\n"
"# CONFIG_FEATURE_IFUPDOWN_EXTERNAL_DHCP is not set\n"
"# CONFIG_INETD is not set\n"
"# CONFIG_FEATURE_INETD_SUPPORT_BUILTIN_ECHO is not set\n"
"# CONFIG_FEATURE_INETD_SUPPORT_BUILTIN_DISCARD is not set\n"
"# CONFIG_FEATURE_INETD_SUPPORT_BUILTIN_TIME is not set\n"
"# CONFIG_FEATURE_INETD_SUPPORT_BUILTIN_DAYTIME is not set\n"
"# CONFIG_FEATURE_INETD_SUPPORT_BUILTIN_CHARGEN is not set\n"
"# CONFIG_FEATURE_INETD_RPC is not set\n"
"# CONFIG_IP is not set\n"
"# CONFIG_FEATURE_IP_ADDRESS is not set\n"
"# CONFIG_FEATURE_IP_LINK is not set\n"
"# CONFIG_FEATURE_IP_ROUTE is not set\n"
"# CONFIG_FEATURE_IP_TUNNEL is not set\n"
"# CONFIG_FEATURE_IP_RULE is not set\n"
"# CONFIG_FEATURE_IP_SHORT_FORMS is not set\n"
"# CONFIG_FEATURE_IP_RARE_PROTOCOLS is not set\n"
"# CONFIG_IPADDR is not set\n"
"# CONFIG_IPLINK is not set\n"
"# CONFIG_IPROUTE is not set\n"
"# CONFIG_IPTUNNEL is not set\n"
"# CONFIG_IPRULE is not set\n"
"# CONFIG_IPCALC is not set\n"
"# CONFIG_FEATURE_IPCALC_FANCY is not set\n"
"# CONFIG_FEATURE_IPCALC_LONG_OPTIONS is not set\n"
"# CONFIG_NETMSG is not set\n"
"# CONFIG_NETSTAT is not set\n"
"# CONFIG_FEATURE_NETSTAT_WIDE is not set\n"
"# CONFIG_FEATURE_NETSTAT_PRG is not set\n"
"# CONFIG_NSLOOKUP is not set\n"
"# CONFIG_NTPD is not set\n"
"# CONFIG_FEATURE_NTPD_SERVER is not set\n"
"# CONFIG_PSCAN is not set\n"
"CONFIG_ROUTE=y\n"
"# CONFIG_SLATTACH is not set\n"
"# CONFIG_TCPSVD is not set\n"
"# CONFIG_TELNET is not set\n"
"# CONFIG_FEATURE_TELNET_TTYPE is not set\n"
"# CONFIG_FEATURE_TELNET_AUTOLOGIN is not set\n"
"# CONFIG_TELNETD is not set\n"
"# CONFIG_FEATURE_TELNETD_STANDALONE is not set\n"
"# CONFIG_FEATURE_TELNETD_INETD_WAIT is not set\n"
"# CONFIG_TFTP is not set\n"
"# CONFIG_TFTPD is not set\n"
"# CONFIG_FEATURE_TFTP_GET is not set\n"
"# CONFIG_FEATURE_TFTP_PUT is not set\n"
"# CONFIG_FEATURE_TFTP_BLOCKSIZE is not set\n"
"# CONFIG_FEATURE_TFTP_PROGRESS_BAR is not set\n"
"# CONFIG_TFTP_DEBUG is not set\n"
"# CONFIG_TRACEROUTE is not set\n"
"# CONFIG_TRACEROUTE6 is not set\n"
"# CONFIG_FEATURE_TRACEROUTE_VERBOSE is not set\n"
"# CONFIG_FEATURE_TRACEROUTE_SOURCE_ROUTE is not set\n"
"# CONFIG_FEATURE_TRACEROUTE_USE_ICMP is not set\n"
"# CONFIG_TUNCTL is not set\n"
"# CONFIG_FEATURE_TUNCTL_UG is not set\n"
"# CONFIG_UDHCPD is not set\n"
"# CONFIG_DHCPRELAY is not set\n"
"# CONFIG_DUMPLEASES is not set\n"
"# CONFIG_FEATURE_UDHCPD_WRITE_LEASES_EARLY is not set\n"
"# CONFIG_FEATURE_UDHCPD_BASE_IP_ON_MAC is not set\n"
"CONFIG_DHCPD_LEASES_FILE=\"\"\n"
"CONFIG_UDHCPC=y\n"
"# CONFIG_FEATURE_UDHCPC_ARPING is not set\n"
"# CONFIG_FEATURE_UDHCP_PORT is not set\n"
"CONFIG_UDHCP_DEBUG=0\n"
"CONFIG_FEATURE_UDHCP_RFC3397=y\n"
"# CONFIG_FEATURE_UDHCP_8021Q is not set\n"
"CONFIG_UDHCPC_DEFAULT_SCRIPT=\"/usr/share/udhcpc/default.script\"\n"
"CONFIG_UDHCPC_SLACK_FOR_BUGGY_SERVERS=80\n"
"CONFIG_IFUPDOWN_UDHCPC_CMD_OPTIONS=\"\"\n"
"# CONFIG_UDPSVD is not set\n"
"CONFIG_VCONFIG=y\n"
"CONFIG_WGET=y\n"
"CONFIG_FEATURE_WGET_STATUSBAR=y\n"
"CONFIG_FEATURE_WGET_AUTHENTICATION=y\n"
"CONFIG_FEATURE_WGET_LONG_OPTIONS=y\n"
"CONFIG_FEATURE_WGET_TIMEOUT=y\n"
"# CONFIG_ZCIP is not set\n"
"# CONFIG_LPD is not set\n"
"# CONFIG_LPR is not set\n"
"# CONFIG_LPQ is not set\n"
"# CONFIG_MAKEMIME is not set\n"
"CONFIG_FEATURE_MIME_CHARSET=\"\"\n"
"# CONFIG_POPMAILDIR is not set\n"
"# CONFIG_FEATURE_POPMAILDIR_DELIVERY is not set\n"
"# CONFIG_REFORMIME is not set\n"
"# CONFIG_FEATURE_REFORMIME_COMPAT is not set\n"
"# CONFIG_SENDMAIL is not set\n"
"# CONFIG_IOSTAT is not set\n"
"# CONFIG_MPSTAT is not set\n"
"# CONFIG_NMETER is not set\n"
"# CONFIG_PMAP is not set\n"
"# CONFIG_POWERTOP is not set\n"
"# CONFIG_PSTREE is not set\n"
"# CONFIG_PWDX is not set\n"
"# CONFIG_SMEMCAP is not set\n"
"CONFIG_UPTIME=y\n"
"# CONFIG_FEATURE_UPTIME_UTMP_SUPPORT is not set\n"
"# CONFIG_FREE is not set\n"
"# CONFIG_FUSER is not set\n"
"CONFIG_KILL=y\n"
"CONFIG_KILLALL=y\n"
"# CONFIG_KILLALL5 is not set\n"
"# CONFIG_PGREP is not set\n"
"CONFIG_PIDOF=y\n"
"# CONFIG_FEATURE_PIDOF_SINGLE is not set\n"
"# CONFIG_FEATURE_PIDOF_OMIT is not set\n"
"# CONFIG_PKILL is not set\n"
"CONFIG_PS=y\n"
"CONFIG_FEATURE_PS_WIDE=y\n"
"# CONFIG_FEATURE_PS_TIME is not set\n"
"# CONFIG_FEATURE_PS_ADDITIONAL_COLUMNS is not set\n"
"# CONFIG_FEATURE_PS_UNUSUAL_SYSTEMS is not set\n"
"# CONFIG_RENICE is not set\n"
"# CONFIG_BB_SYSCTL is not set\n"
"# CONFIG_TOP is not set\n"
"# CONFIG_FEATURE_TOP_CPU_USAGE_PERCENTAGE is not set\n"
"# CONFIG_FEATURE_TOP_CPU_GLOBAL_PERCENTS is not set\n"
"# CONFIG_FEATURE_TOP_SMP_CPU is not set\n"
"# CONFIG_FEATURE_TOP_DECIMALS is not set\n"
"# CONFIG_FEATURE_TOP_SMP_PROCESS is not set\n"
"# CONFIG_FEATURE_TOPMEM is not set\n"
"# CONFIG_FEATURE_SHOW_THREADS is not set\n"
"# CONFIG_WATCH is not set\n"
"# CONFIG_RUNSV is not set\n"
"# CONFIG_RUNSVDIR is not set\n"
"# CONFIG_FEATURE_RUNSVDIR_LOG is not set\n"
"# CONFIG_SV is not set\n"
"CONFIG_SV_DEFAULT_SERVICE_DIR=\"\"\n"
"# CONFIG_SVLOGD is not set\n"
"# CONFIG_CHPST is not set\n"
"# CONFIG_SETUIDGID is not set\n"
"# CONFIG_ENVUIDGID is not set\n"
"# CONFIG_ENVDIR is not set\n"
"# CONFIG_SOFTLIMIT is not set\n"
"# CONFIG_CHCON is not set\n"
"# CONFIG_FEATURE_CHCON_LONG_OPTIONS is not set\n"
"# CONFIG_GETENFORCE is not set\n"
"# CONFIG_GETSEBOOL is not set\n"
"# CONFIG_LOAD_POLICY is not set\n"
"# CONFIG_MATCHPATHCON is not set\n"
"# CONFIG_RESTORECON is not set\n"
"# CONFIG_RUNCON is not set\n"
"# CONFIG_FEATURE_RUNCON_LONG_OPTIONS is not set\n"
"# CONFIG_SELINUXENABLED is not set\n"
"# CONFIG_SETENFORCE is not set\n"
"# CONFIG_SETFILES is not set\n"
"# CONFIG_FEATURE_SETFILES_CHECK_OPTION is not set\n"
"# CONFIG_SETSEBOOL is not set\n"
"# CONFIG_SESTATUS is not set\n"
"CONFIG_ASH=y\n"
"CONFIG_ASH_BASH_COMPAT=y\n"
"# CONFIG_ASH_IDLE_TIMEOUT is not set\n"
"CONFIG_ASH_JOB_CONTROL=y\n"
"CONFIG_ASH_ALIAS=y\n"
"CONFIG_ASH_GETOPTS=y\n"
"CONFIG_ASH_BUILTIN_ECHO=y\n"
"CONFIG_ASH_BUILTIN_PRINTF=y\n"
"CONFIG_ASH_BUILTIN_TEST=y\n"
"CONFIG_ASH_CMDCMD=y\n"
"# CONFIG_ASH_MAIL is not set\n"
"# CONFIG_ASH_OPTIMIZE_FOR_SIZE is not set\n"
"# CONFIG_ASH_RANDOM_SUPPORT is not set\n"
"CONFIG_ASH_EXPAND_PRMT=y\n"
"# CONFIG_CTTYHACK is not set\n"
"# CONFIG_HUSH is not set\n"
"# CONFIG_HUSH_BASH_COMPAT is not set\n"
"# CONFIG_HUSH_BRACE_EXPANSION is not set\n"
"# CONFIG_HUSH_HELP is not set\n"
"# CONFIG_HUSH_INTERACTIVE is not set\n"
"# CONFIG_HUSH_SAVEHISTORY is not set\n"
"# CONFIG_HUSH_JOB is not set\n"
"# CONFIG_HUSH_TICK is not set\n"
"# CONFIG_HUSH_IF is not set\n"
"# CONFIG_HUSH_LOOPS is not set\n"
"# CONFIG_HUSH_CASE is not set\n"
"# CONFIG_HUSH_FUNCTIONS is not set\n"
"# CONFIG_HUSH_LOCAL is not set\n"
"# CONFIG_HUSH_RANDOM_SUPPORT is not set\n"
"# CONFIG_HUSH_EXPORT_N is not set\n"
"# CONFIG_HUSH_MODE_X is not set\n"
"# CONFIG_MSH is not set\n"
"CONFIG_FEATURE_SH_IS_ASH=y\n"
"# CONFIG_FEATURE_SH_IS_HUSH is not set\n"
"# CONFIG_FEATURE_SH_IS_NONE is not set\n"
"# CONFIG_FEATURE_BASH_IS_ASH is not set\n"
"# CONFIG_FEATURE_BASH_IS_HUSH is not set\n"
"CONFIG_FEATURE_BASH_IS_NONE=y\n"
"CONFIG_SH_MATH_SUPPORT=y\n"
"CONFIG_SH_MATH_SUPPORT_64=y\n"
"# CONFIG_FEATURE_SH_EXTRA_QUIET is not set\n"
"# CONFIG_FEATURE_SH_STANDALONE is not set\n"
"# CONFIG_FEATURE_SH_NOFORK is not set\n"
"# CONFIG_FEATURE_SH_HISTFILESIZE is not set\n"
"CONFIG_SYSLOGD=y\n"
"CONFIG_FEATURE_ROTATE_LOGFILE=y\n"
"CONFIG_FEATURE_REMOTE_LOG=y\n"
"# CONFIG_FEATURE_SYSLOGD_DUP is not set\n"
"# CONFIG_FEATURE_SYSLOGD_CFG is not set\n"
"CONFIG_FEATURE_SYSLOGD_READ_BUFFER_SIZE=256\n"
"CONFIG_FEATURE_IPC_SYSLOG=y\n"
"CONFIG_FEATURE_IPC_SYSLOG_BUFFER_SIZE=16\n"
"CONFIG_LOGREAD=y\n"
"# CONFIG_FEATURE_LOGREAD_REDUCED_LOCKING is not set\n"
"CONFIG_KLOGD=y\n"
"CONFIG_FEATURE_KLOGD_KLOGCTL=y\n"
"CONFIG_LOGGER=y\n"
;
#endif
