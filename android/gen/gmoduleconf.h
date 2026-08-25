/* gmoduleconf.h - Static configuration for Android
 * Converted from gmodule/gmoduleconf.h.in and gmodule/meson.build.
 * Android has dlopen/dlsym => G_MODULE_IMPL_DL.
 */
#ifndef __G_MODULE_CONF_H__
#define __G_MODULE_CONF_H__


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#define	G_MODULE_IMPL_NONE	0
#define	G_MODULE_IMPL_DL	1
#define	G_MODULE_IMPL_WIN32	3
#define	G_MODULE_IMPL_AR	7

/* Converted from: have_dlopen_dlsym => G_MODULE_IMPL = G_MODULE_IMPL_DL */
#define	G_MODULE_IMPL		G_MODULE_IMPL_DL
/* Converted from: cc.has_function('dlerror', ...) - available on Android */
#if (1)
#define	G_MODULE_HAVE_DLERROR
#endif
/* Converted from: g_module_need_uscore = 0 (no underscore prefix on Android) */
#if (0)
#define	G_MODULE_NEED_USCORE
#endif
/* Converted from: g_module_broken_rtld_global = 0 */
#if (0)
#define G_MODULE_BROKEN_RTLD_GLOBAL
#endif

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* __G_MODULE_CONF_H__ */
