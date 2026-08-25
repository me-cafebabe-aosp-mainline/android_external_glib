/* glibconfig.h - Static configuration for Android 64-bit (arm64, x86_64)
 * Converted from glibconfig.h.in and meson.build for Android/Bionic/clang.
 * 64-bit: sizeof(long)=8, sizeof(void*)=8, sizeof(size_t)=8
 */

#ifndef __GLIBCONFIG_H__
#define __GLIBCONFIG_H__

#include <glib/gmacros.h>

#include <limits.h>
#include <float.h>

/* Converted from: glib_conf.has('HAVE_ALLOCA_H') */
#define GLIB_HAVE_ALLOCA_H 1

/* Converted from: glib_build_static_only checks - not static on Android */
/* #undef GLIB_STATIC_COMPILATION */
/* #undef GOBJECT_STATIC_COMPILATION */
/* #undef GIO_STATIC_COMPILATION */
/* #undef GMODULE_STATIC_COMPILATION */
/* #undef GI_STATIC_COMPILATION */

/* Converted from: USE_SYSTEM_PRINTF */
#define GLIB_USING_SYSTEM_PRINTF 1

G_BEGIN_DECLS

#define G_MINFLOAT	FLT_MIN
#define G_MAXFLOAT	FLT_MAX
#define G_MINDOUBLE	DBL_MIN
#define G_MAXDOUBLE	DBL_MAX
#define G_MINSHORT	SHRT_MIN
#define G_MAXSHORT	SHRT_MAX
#define G_MAXUSHORT	USHRT_MAX
#define G_MININT	INT_MIN
#define G_MAXINT	INT_MAX
#define G_MAXUINT	UINT_MAX
#define G_MINLONG	LONG_MIN
#define G_MAXLONG	LONG_MAX
#define G_MAXULONG	ULONG_MAX

typedef signed char gint8;
typedef unsigned char guint8;

/* Converted from: short_size == 2 => gint16 = short */
typedef signed short gint16;
typedef unsigned short guint16;

#define G_GINT16_MODIFIER "h"
#define G_GINT16_FORMAT "hi"
#define G_GUINT16_FORMAT "hu"

/* Converted from: int_size == 4 => gint32 = int */
typedef signed int gint32;
typedef unsigned int guint32;

#define G_GINT32_MODIFIER ""
#define G_GINT32_FORMAT "i"
#define G_GUINT32_FORMAT "u"

#define G_HAVE_GINT64 1          /* deprecated, always true */

/* Converted from: long_size == 8 && int64_t_typedef == 'long' => gint64 = long */
typedef signed long gint64;
typedef unsigned long guint64;

#define G_GINT64_CONSTANT(val)	(val##L)
#define G_GUINT64_CONSTANT(val)	(val##UL)

#define G_GINT64_MODIFIER "l"
#define G_GINT64_FORMAT "li"
#define G_GUINT64_FORMAT "lu"

/* Converted from: voidp_size == 8, long_size == 8 */
#define GLIB_SIZEOF_VOID_P 8
#define GLIB_SIZEOF_LONG   8
#define GLIB_SIZEOF_SIZE_T 8
#define GLIB_SIZEOF_SSIZE_T 8

/* Converted from: g_sizet_compatibility['long'] => size_type = long */
typedef signed long gssize;
typedef unsigned long gsize;
#define G_GSIZE_MODIFIER "l"
#define G_GSSIZE_MODIFIER "l"
#define G_GSIZE_FORMAT "lu"
#define G_GSSIZE_FORMAT "li"

#define G_MAXSIZE	G_MAXULONG
#define G_MINSSIZE	G_MINLONG
#define G_MAXSSIZE	G_MAXLONG

typedef gint64 goffset;
#define G_MINOFFSET	G_MININT64
#define G_MAXOFFSET	G_MAXINT64

#define G_GOFFSET_MODIFIER      G_GINT64_MODIFIER
#define G_GOFFSET_FORMAT        G_GINT64_FORMAT
#define G_GOFFSET_CONSTANT(val) G_GINT64_CONSTANT(val)

/* Converted from: non-windows g_pollfd_format */
#define G_POLLFD_FORMAT %d

/* Converted from: voidp_size == long_size */
#define GPOINTER_TO_INT(p)	((gint) (glong) (p))
#define GPOINTER_TO_UINT(p)	((guint) (gulong) (p))

#define GINT_TO_POINTER(i)	((gpointer) (glong) (i))
#define GUINT_TO_POINTER(u)	((gpointer) (gulong) (u))

/* Converted from: voidp_size == long_size => intptr = long */
typedef signed long gintptr;
typedef unsigned long guintptr;

#define G_GINTPTR_MODIFIER      "l"
#define G_GINTPTR_FORMAT        "li"
#define G_GUINTPTR_FORMAT       "lu"

/* Converted from: version numbers */
#define GLIB_MAJOR_VERSION 2
#define GLIB_MINOR_VERSION 89
#define GLIB_MICRO_VERSION 4

/* Converted from: glib_os for non-windows, non-cygwin */
#define G_OS_UNIX

#define G_VA_COPY va_copy

#define G_HAVE_ISO_VARARGS 1

/* Converted from: sizeof checks in meson.build (64-bit values) */
#define SIZEOF_CHAR 1
#define SIZEOF_INT 4
#define SIZEOF_SHORT 2
#define SIZEOF_LONG 8
#define SIZEOF_LONG_LONG 8
#define SIZEOF_SIZE_T 8
#define SIZEOF_SSIZE_T 8
#define SIZEOF_VOID_P 8
#define SIZEOF_WCHAR_T 4

#if __GNUC__ == 2 && __GNUC_MINOR__ == 95
#  undef G_HAVE_ISO_VARARGS
#endif

/* Converted from: growing_stack check - false for most platforms */
#define G_HAVE_GROWING_STACK 0

#ifndef _MSC_VER
# define G_HAVE_GNUC_VARARGS 1
#endif

#if defined(__SUNPRO_C) && (__SUNPRO_C >= 0x590)
#define G_GNUC_INTERNAL __attribute__((visibility("hidden")))
#elif defined(__SUNPRO_C) && (__SUNPRO_C >= 0x550)
#define G_GNUC_INTERNAL __hidden
#elif defined (__GNUC__) && defined (G_HAVE_GNUC_VISIBILITY)
#define G_GNUC_INTERNAL __attribute__((visibility("hidden")))
#else
#define G_GNUC_INTERNAL
#endif

#define G_THREADS_ENABLED
/* Converted from: posix threads on non-windows */
#define G_THREADS_IMPL_POSIX

/* Converted from: have_atomic_lock_free = true (clang) */
#define G_ATOMIC_LOCK_FREE 1

/* Converted from: little-endian on ARM64/x86_64 */
#define GINT16_TO_LE(val)	((gint16) (val))
#define GUINT16_TO_LE(val)	((guint16) (val))
#define GINT16_TO_BE(val)	((gint16) GUINT16_SWAP_LE_BE (val))
#define GUINT16_TO_BE(val)	(GUINT16_SWAP_LE_BE (val))

#define GINT32_TO_LE(val)	((gint32) (val))
#define GUINT32_TO_LE(val)	((guint32) (val))
#define GINT32_TO_BE(val)	((gint32) GUINT32_SWAP_LE_BE (val))
#define GUINT32_TO_BE(val)	(GUINT32_SWAP_LE_BE (val))

#define GINT64_TO_LE(val)	((gint64) (val))
#define GUINT64_TO_LE(val)	((guint64) (val))
#define GINT64_TO_BE(val)	((gint64) GUINT64_SWAP_LE_BE (val))
#define GUINT64_TO_BE(val)	(GUINT64_SWAP_LE_BE (val))

/* Converted from: gintbits=32, glongbits=64, gsizebits=64 */
#define GLONG_TO_LE(val)	((glong) GINT64_TO_LE (val))
#define GULONG_TO_LE(val)	((gulong) GUINT64_TO_LE (val))
#define GLONG_TO_BE(val)	((glong) GINT64_TO_BE (val))
#define GULONG_TO_BE(val)	((gulong) GUINT64_TO_BE (val))
#define GINT_TO_LE(val)		((gint) GINT32_TO_LE (val))
#define GUINT_TO_LE(val)	((guint) GUINT32_TO_LE (val))
#define GINT_TO_BE(val)		((gint) GINT32_TO_BE (val))
#define GUINT_TO_BE(val)	((guint) GUINT32_TO_BE (val))
#define GSIZE_TO_LE(val)	((gsize) GUINT64_TO_LE (val))
#define GSSIZE_TO_LE(val)	((gssize) GINT64_TO_LE (val))
#define GSIZE_TO_BE(val)	((gsize) GUINT64_TO_BE (val))
#define GSSIZE_TO_BE(val)	((gssize) GINT64_TO_BE (val))
#define G_BYTE_ORDER G_LITTLE_ENDIAN

/* Converted from: poll defines for Linux (sys/poll.h) */
#define GLIB_SYSDEF_POLLIN =1
#define GLIB_SYSDEF_POLLOUT =4
#define GLIB_SYSDEF_POLLPRI =2
#define GLIB_SYSDEF_POLLHUP =16
#define GLIB_SYSDEF_POLLERR =8
#define GLIB_SYSDEF_POLLNVAL =32

/* Converted from: non-windows, non-apple G_MODULE_SUFFIX */
#define G_MODULE_SUFFIX "so"

/* Converted from: non-windows GPid type */
typedef int GPid;
#define G_PID_FORMAT "i"

/* Converted from: AF_UNIX/AF_INET/AF_INET6 for Linux */
#define GLIB_SYSDEF_AF_UNIX 1
#define GLIB_SYSDEF_AF_INET 2
#define GLIB_SYSDEF_AF_INET6 10

/* Converted from: MSG_OOB/MSG_PEEK/MSG_DONTROUTE for Linux */
#define GLIB_SYSDEF_MSG_OOB 1
#define GLIB_SYSDEF_MSG_PEEK 2
#define GLIB_SYSDEF_MSG_DONTROUTE 4

/* Converted from: non-windows dir/searchpath separators */
#define G_DIR_SEPARATOR '/'
#define G_DIR_SEPARATOR_S "/"
#define G_SEARCHPATH_SEPARATOR ':'
#define G_SEARCHPATH_SEPARATOR_S ":"

/* Converted from: have_func_free_sized = false (not on Android) */
/* #undef G_HAVE_FREE_SIZED */

G_END_DECLS

#endif /* __GLIBCONFIG_H__ */
