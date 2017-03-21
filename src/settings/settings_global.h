#ifndef XDKJ_SETTINGS_GLOBAL_H
#define XDKJ_SETTINGS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(USE_STATIC_LIB)
#define SETTINGS_EXPORT Q_DECL_EXPORT
#else
#if defined(SETTINGS_LIBRARY)
#  define SETTINGS_EXPORT Q_DECL_EXPORT
#else
#  define SETTINGS_EXPORT Q_DECL_IMPORT
#endif
#endif

#endif // XDKJ_SETTINGS_GLOBAL_H

