/* config.h - Static configuration for Android (all architectures)
 * Converted from meson.build for Android/Bionic/clang target.
 * Most features are assumed to be available on modern Android (API 36+).
 */

#ifndef CONFIG_H
#define CONFIG_H

/* Converted from: glib_conf.set('GLIB_MAJOR_VERSION', major_version) etc. */
#define GLIB_MAJOR_VERSION 2
#define GLIB_MINOR_VERSION 89
#define GLIB_MICRO_VERSION 4
#define GLIB_INTERFACE_AGE 0
#define GLIB_BINARY_AGE 8904

/* Converted from: glib_conf.set_quoted('GETTEXT_PACKAGE', 'glib20') */
#define GETTEXT_PACKAGE "glib20"

/* Converted from: glib_conf.set_quoted('PACKAGE_*', ...) */
#define PACKAGE_BUGREPORT "https://gitlab.gnome.org/GNOME/glib/issues/new"
#define PACKAGE_NAME "glib"
#define PACKAGE_STRING "glib 2.89.4"
#define PACKAGE_TARNAME "glib"
#define PACKAGE_URL ""
#define PACKAGE_VERSION "2.89.4"

/* Converted from: glib_conf.set('ENABLE_NLS', 1) */
#define ENABLE_NLS 1

/* Converted from: glib_conf.set('_GNU_SOURCE', 1) */
#define _GNU_SOURCE 1

/* Converted from: add_project_arguments('-D_GNU_SOURCE', ...) */
/* (already defined above) */

/* Converted from: glib_os = '#define G_OS_UNIX' (non-windows, non-cygwin) */
/* glib_os is written to glibconfig.h, not config.h */

/* === Header checks === */
/* Converted from: headers list in meson.build, assuming Android/Bionic availability */

#define HAVE_ALLOCA_H 1
/* #undef HAVE_AFUNIX_H */
/* #undef HAVE_CRT_EXTERNS_H */
#define HAVE_DIRENT_H 1
#define HAVE_FLOAT_H 1
/* #undef HAVE_FSTAB_H */
#define HAVE_FTW_H 1
#define HAVE_GRP_H 1
/* #undef HAVE_INTSAFE_H */
#define HAVE_INTTYPES_H 1
/* #undef HAVE_LIBPROC_H */
#define HAVE_LIMITS_H 1
#define HAVE_LINUX_NETLINK_H 1
#define HAVE_LOCALE_H 1
/* #undef HAVE_MACH_MACH_TIME_H */
/* #undef HAVE_MEMORY_H */
#define HAVE_MNTENT_H 1
/* #undef HAVE_NETLINK_NETLINK_H */
/* #undef HAVE_NETLINK_NETLINK_ROUTE_H */
#define HAVE_POLL_H 1
#define HAVE_PWD_H 1
#define HAVE_SCHED_H 1
#define HAVE_SPAWN_H 1
#define HAVE_STDATOMIC_H 1
/* #undef HAVE_STDCKDINT_H */
#define HAVE_STDINT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_STRINGS_H 1
#define HAVE_SYS_AUXV_H 1
/* #undef HAVE_SYS_EVENT_H */
#define HAVE_SYS_UIO_H 1
/* #undef HAVE_SYS_FILIO_H */
#define HAVE_SYS_INOTIFY_H 1
/* #undef HAVE_SYS_MKDEV_H */
/* #undef HAVE_SYS_MNTCTL_H */
/* #undef HAVE_SYS_MNTTAB_H */
#define HAVE_SYS_MOUNT_H 1
#define HAVE_SYS_PARAM_H 1
#define HAVE_SYS_PRCTL_H 1
#define HAVE_SYS_RESOURCE_H 1
#define HAVE_SYS_SELECT_H 1
/* #undef HAVE_SYS_STATFS_H */
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_STATVFS_H 1
/* #undef HAVE_SYS_SYSCTL_H */
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_TIMES_H 1
#define HAVE_SYS_TYPES_H 1
/* #undef HAVE_SYS_UCRED_H */
/* HAVE_SYS_UIO_H already defined above */
/* #undef HAVE_SYS_VFS_H */
/* #undef HAVE_SYS_VFSTAB_H */
/* #undef HAVE_SYS_VMOUNT_H */
#define HAVE_SYS_WAIT_H 1
#define HAVE_SYSLOG_H 1
#define HAVE_TERMIOS_H 1
#define HAVE_UNISTD_H 1
/* #undef HAVE_VALUES_H */
/* #undef HAVE_VCRUNTIME_H */
#define HAVE_WCHAR_H 1
/* #undef HAVE_XLOCALE_H */

/* Converted from: cc.check_header('malloc.h') - Bionic has malloc.h */
#define HAVE_MALLOC_H 1

/* Converted from: HAVE_LINUX_NETLINK_H => HAVE_NETLINK */
#define HAVE_NETLINK 1

/* Converted from: statx check - skipped for host_system == 'android' */
/* #undef HAVE_STATX */

/* Converted from: cc.has_header_symbol('locale.h', 'LC_MESSAGES') */
#define HAVE_LC_MESSAGES 1

/* === Struct member checks === */
/* Converted from: struct_members list in meson.build */

/* #undef HAVE_STRUCT_STAT_ST_MTIMENSEC */
#define HAVE_STRUCT_STAT_ST_MTIM_TV_NSEC 1
/* #undef HAVE_STRUCT_STAT_ST_ATIMENSEC */
#define HAVE_STRUCT_STAT_ST_ATIM_TV_NSEC 1
/* #undef HAVE_STRUCT_STAT_ST_CTIMENSEC */
#define HAVE_STRUCT_STAT_ST_CTIM_TV_NSEC 1
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIME */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIMENSEC */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIM */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIM_TV_NSEC */
#define HAVE_STRUCT_STAT_ST_BLKSIZE 1
#define HAVE_STRUCT_STAT_ST_BLOCKS 1
/* #undef HAVE_STRUCT_STATFS_F_FSTYPENAME */
/* #undef HAVE_STRUCT_STATFS_F_BAVAIL */
#define HAVE_STRUCT_DIRENT_D_TYPE 1
/* #undef HAVE_STRUCT_STATVFS_F_BASETYPE */
/* #undef HAVE_STRUCT_STATVFS_F_FSTYPENAME */
#define HAVE_STRUCT_STATVFS_F_TYPE 1
#define HAVE_STRUCT_TM_TM_GMTOFF 1
/* #undef HAVE_STRUCT_TM___TM_GMTOFF */

/* === Function checks === */
/* Converted from: functions list and individual checks in meson.build */

#define HAVE_ACCEPT4 1
#define HAVE_CLOSE_RANGE 1
#define HAVE_COPY_FILE_RANGE 1
#define HAVE_ENDMNTENT 1
/* #undef HAVE_ENDSERVENT */
#define HAVE_EPOLL_CREATE1 1
#define HAVE_FACCESSAT 1
#define HAVE_FALLOCATE 1
#define HAVE_FCHMOD 1
#define HAVE_FCHOWN 1
/* #undef HAVE_FDWALK */
/* #undef HAVE_FREE_ALIGNED_SIZED */
/* #undef HAVE_FREE_SIZED */
#define HAVE_FSYNC 1
#define HAVE_FTRUNCATE64 1
#define HAVE_GETAUXVAL 1
#define HAVE_GETC_UNLOCKED 1
/* #undef HAVE_GETFSENT */
/* #undef HAVE_GETFSSTAT */
#define HAVE_GETGRGID_R 1
#define HAVE_GETIFADDRS 1
#define HAVE_GETMNTENT_R 1
#define HAVE_GETPWNAM_R 1
#define HAVE_GETPWUID_R 1
#define HAVE_GETRESUID 1
/* #undef HAVE_GETVFSSTAT */
#define HAVE_GMTIME_R 1
#define HAVE_HASMNTOPT 1
#define HAVE_INOTIFY_INIT1 1
/* #undef HAVE_ISSETUGID */
/* #undef HAVE_KEVENT */
/* #undef HAVE_KQUEUE */
#define HAVE_LCHMOD 1
#define HAVE_LCHOWN 1
#define HAVE_LINK 1
#define HAVE_LOCALTIME_R 1
#define HAVE_LSTAT 1
#define HAVE_MBRTOWC 1
#define HAVE_MEMALIGN 1
#define HAVE_MEMMEM 1
#define HAVE_MMAP 1
#define HAVE_NEWLOCALE 1
#define HAVE_PIPE2 1
#define HAVE_POLL 1
#define HAVE_PRLIMIT 1
#define HAVE_READLINK 1
#define HAVE_RECVMMSG 1
#define HAVE_SENDMMSG 1
#define HAVE_SETENV 1
#define HAVE_SETMNTENT 1
#define HAVE_STRERROR_R 1
#define HAVE_STRNLEN 1
#define HAVE_STRSIGNAL 1
#define HAVE_STRTOD_L 1
#define HAVE_STRTOLL_L 1
#define HAVE_STRTOULL_L 1
#define HAVE_SYMLINK 1
#define HAVE_TIMEGM 1
#define HAVE_UNSETENV 1
#define HAVE_USELOCALE 1
#define HAVE_UTIMES 1
#define HAVE_UTIMENSAT 1
/* #undef HAVE_VALLOC */
#define HAVE_VASPRINTF 1
#define HAVE_VSNPRINTF 1
#define HAVE_WCRTOMB 1
#define HAVE_WCSLEN 1
#define HAVE_WCSNLEN 1
/* #undef HAVE_SYSCTLBYNAME */

/* Converted from: non-windows: functions += ['if_indextoname', 'if_nametoindex'] */
#define HAVE_IF_INDEXTONAME 1
#define HAVE_IF_NAMETOINDEX 1

/* Converted from: non-AIX: functions += ['splice'] */
#define HAVE_SPLICE 1

/* Converted from: non-sunos: functions += ['sysinfo'] */
#define HAVE_SYSINFO 1

/* Converted from: cc.has_function('stpcpy', prefix: '#include <string.h>') */
#define HAVE_STPCPY 1

/* Converted from: cc.has_function('memalign', prefix: ...) */
#define HAVE_MEMALIGN 1

/* Converted from: getservbyname_r check */
/* #undef HAVE_GETSERVBYNAME_R */

/* Converted from: cc.has_function('_aligned_malloc', ...) - Windows only */
/* #undef HAVE__ALIGNED_MALLOC */

/* Converted from: cc.has_function('aligned_alloc', ...) */
#define HAVE_ALIGNED_ALLOC 1

/* Converted from: cc.has_function('posix_memalign', ...) */
#define HAVE_POSIX_MEMALIGN 1

/* Converted from: cc.has_function('posix_spawn', prefix: '#include <spawn.h>') */
#define HAVE_POSIX_SPAWN 1

/* Converted from: strerror_r returns char * check - Bionic returns int */
#define STRERROR_R_CHAR_P 1

/* Converted from: snprintf/strcasecmp checks */
#define HAVE_SNPRINTF 1
#define HAVE_STRCASECMP 1
#define HAVE_STRNCASECMP 1

/* Converted from: major/minor header symbol checks */
#define MAJOR_IN_SYSMACROS 1
/* #undef MAJOR_IN_MKDEV */
/* #undef MAJOR_IN_TYPES */

/* Converted from: dlfcn.h symbol checks */
#define HAVE_RTLD_LAZY 1
#define HAVE_RTLD_NOW 1
#define HAVE_RTLD_GLOBAL 1
#define HAVE_RTLD_NEXT 1

/* Converted from: cc.has_type('loff_t', prefix: '#include <sys/types.h>') */
#define HAVE_LOFF_T 1

/* Converted from: cc.has_function('unshare', prefix: '#include <sched.h>', args: '-D_GNU_SOURCE') */
#define HAVE_UNSHARE 1

/* Converted from: statfs/statvfs determination */
/* Android has statvfs but not statfs in the traditional sense */
/* #undef USE_STATFS */
#define USE_STATVFS 1

/* Converted from: HAVE_SYS_STATVFS_H => functions += ['statvfs'] */
#define HAVE_STATVFS 1

/* Converted from: HAVE_SYS_PRCTL_H => functions += ['prctl'] */
#define HAVE_PRCTL 1

/* Converted from: cc.has_function('statfs') - conditional */
#define HAVE_STATFS 1

/* Converted from: linux mkostemp check */
#define HAVE_MKOSTEMP 1

/* Converted from: futex/eventfd/ppoll/pidfd checks */
#define HAVE_FUTEX 1
#define HAVE_FUTEX_TIME64 1
#define HAVE_EVENTFD 1
#define HAVE_PPOLL 1
/* #undef HAVE_PIDFD */

/* Converted from: __uint128_t check - NOT available on 32-bit, available on 64-bit.
 * Removed from shared config.h to avoid compile errors on 32-bit.
 * 64-bit architectures will use the portable fallback code. */
/* #undef HAVE_UINT128_T */

/* Converted from: clock_gettime/clock_nanosleep checks */
#define HAVE_CLOCK_GETTIME 1
#define HAVE_CLOCK_NANOSLEEP 1

/* Converted from: C99 snprintf/vsnprintf/Unix98 printf checks */
/* Android/Bionic/clang has good C99 printf support */
#define HAVE_C99_VSNPRINTF 1
#define HAVE_C99_SNPRINTF 1
#define HAVE_UNIX98_PRINTF 1

/* Converted from: use_system_printf = have_good_vsnprintf && have_good_snprintf && have_good_printf */
#define USE_SYSTEM_PRINTF 1

/* Converted from: nl_langinfo checks */
#define HAVE_LANGINFO_CODESET 1
#define HAVE_CODESET 1
#define HAVE_LANGINFO_TIME 1
/* #undef HAVE_LANGINFO_ERA */
#define HAVE_LANGINFO_OUTDIGIT 1
/* #undef HAVE_LANGINFO_ALTMON */
/* #undef HAVE_LANGINFO_ABALTMON */
/* #undef HAVE_LANGINFO_TIME_CODESET */

/* Converted from: type checks */
#define HAVE_PTRDIFF_T 1
#define HAVE_SIG_ATOMIC_T 1
#define HAVE_LONG_LONG 1
#define HAVE_LONG_DOUBLE 1
#define HAVE_WCHAR_T 1
#define HAVE_WINT_T 1
#define HAVE_INTTYPES_H_WITH_UINTMAX 1
#define HAVE_STDINT_H_WITH_UINTMAX 1
#define HAVE_INTMAX_T 1

/* Converted from: sizeof checks - MOVED to architecture-specific glibconfig.h */
/* SIZEOF_* defines are architecture-dependent and placed in glibconfig.h */
#define SIZEOF_CHAR 1

/* Converted from: EXEEXT - non-windows */
#define EXEEXT ""

/* Converted from: HAVE_IPV6 check */
#define HAVE_IPV6 1

/* Converted from: atomic ops checks - clang supports atomics */
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define _GLIB_GCC_HAVE_SYNC_SWAP 1

/* Converted from: pthread checks (posix threads) */
#define THREADS_POSIX 1
#define HAVE_PTHREAD_ATTR_SETSTACKSIZE 1
/* #undef HAVE_PTHREAD_ATTR_SETINHERITSCHED */
#define HAVE_PTHREAD_CONDATTR_SETCLOCK 1
/* #undef HAVE_PTHREAD_COND_TIMEDWAIT_RELATIVE_NP */
#define HAVE_PTHREAD_GETNAME_NP 1
/* #undef HAVE_PTHREAD_GETAFFINITY_NP */
/* Android uses pthread_setname_np(pthread_t, const char*) */
#define HAVE_PTHREAD_SETNAME_NP_WITH_TID 1
/* #undef HAVE_PTHREAD_SETNAME_NP_WITHOUT_TID */
/* #undef HAVE_PTHREAD_SETNAME_NP_WITH_TID_AND_ARG */
/* #undef HAVE_PTHREAD_SET_NAME_NP */

/* Converted from: iconv dependency - Bionic has built-in iconv */
/* libiconv is empty on non-windows */

/* Converted from: libintl/gettext checks - assume available via Bionic */
#define HAVE_DCGETTEXT 1
#define HAVE_GETTEXT 1
#define HAVE_BIND_TEXTDOMAIN_CODESET 1

/* Converted from: glib_conf.set_quoted('GLIB_LOCALE_DIR', ...) */
#define GLIB_LOCALE_DIR "/data/local/tmp/share/locale"

/* Converted from: glib_conf.set_quoted('GLIB_LOCALSTATEDIR', ...) */
#define GLIB_LOCALSTATEDIR "/data/local/tmp/var"

/* Converted from: glib_conf.set_quoted('GLIB_RUNSTATEDIR', ...) */
#define GLIB_RUNSTATEDIR "/run"

/* Converted from: optional dependency checks (disabled by default per guidelines) */
/* #undef HAVE_LIBMOUNT */
/* #undef HAVE_MNT_MONITOR_VEIL_KERNEL */
/* #undef HAVE_SELINUX */

/* Converted from: xattr checks */
#define HAVE_XATTR 1
#define HAVE_SYS_XATTR_H 1
/* #undef HAVE_ATTR_XATTR_H */
/* #undef HAVE_XATTR_NOFOLLOW */

/* Converted from: strlcpy check - not on Bionic */
/* #undef HAVE_STRLCPY */

/* Converted from: /proc/self/cmdline check */
/* #undef HAVE_PROC_SELF_CMDLINE */

/* Converted from: dn_comp/res_n* network checks in gio/meson.build */
#define HAVE_DN_COMP 1
#define HAVE_RES_NCLOSE 1
/* #undef HAVE_RES_NDESTROY */
#define HAVE_RES_NINIT 1
#define HAVE_RES_NQUERY 1
#define HAVE_IP_MREQN 1
#define HAVE_SIOCGIFADDR /**/

/* Converted from: sysprof dependency (disabled by default) */
/* #undef HAVE_SYSPROF */

/* Converted from: dtrace/systemtap (disabled on Android) */
/* #undef HAVE_DTRACE */

/* Converted from: cc.has_header_symbol('sys/ptrace.h', 'PTRACE_O_EXITKILL') */
/* #undef HAVE_PTRACE_O_EXITKILL */

/* Converted from: libelf (optional, disabled by default) */
/* #undef HAVE_LIBELF */

/* Converted from: gl_unused/gl_extern_inline for gnulib (not needed with USE_SYSTEM_PRINTF) */
#define gl_unused
#define gl_extern_inline

#endif /* CONFIG_H */
