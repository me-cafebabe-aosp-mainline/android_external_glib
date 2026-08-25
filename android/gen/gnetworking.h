/* gnetworking.h - Static configuration for Android
 * Converted from gio/gnetworking.h.in and gio/meson.build.
 * NAMESER_COMPAT_INCLUDE is empty on Android.
 */

#ifndef __G_NETWORKING_H__
#define __G_NETWORKING_H__

#include <glib.h>
#include <gio/gio-visibility.h>

#ifdef G_OS_WIN32
#include <winsock2.h>
#include <ws2tcpip.h>
#include <windns.h>
#include <mswsock.h>
#include <wspiapi.h>
#include <iphlpapi.h>
#undef interface

#else /* !G_OS_WIN32 */

#include <sys/types.h>

#include <netdb.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <resolv.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <net/if.h>

#include <arpa/inet.h>
#include <arpa/nameser.h>
/* Converted from: NAMESER_COMPAT_INCLUDE - empty on Android */

#ifndef __GI_SCANNER__

#ifndef T_SRV
#define T_SRV 33
#endif

#ifndef _PATH_RESCONF
#define _PATH_RESCONF "/etc/resolv.conf"
#endif

#ifndef CMSG_LEN
/* CMSG_LEN and CMSG_SPACE are defined by RFC 2292, but missing on
 * some older platforms.
 */
#define CMSG_LEN(len) ((size_t)CMSG_DATA((struct cmsghdr *)NULL) + (len))

/* CMSG_SPACE must add at least as much padding as CMSG_NXTHDR()
 * adds. We overestimate here.
 */
#define GLIB_ALIGN_TO_SIZEOF(len, obj) (((len) + sizeof (obj) - 1) & ~(sizeof (obj) - 1))
#define CMSG_SPACE(len) GLIB_ALIGN_TO_SIZEOF (CMSG_LEN (len), struct cmsghdr)
#endif
#endif

#endif  /* !__GI_SCANNER__ */

G_BEGIN_DECLS

GIO_AVAILABLE_IN_2_36
void g_networking_init (void);

G_END_DECLS

#endif /* __G_NETWORKING_H__ */
