#ifndef MOONCALENDARGUI_GLOBAL_H
#define MOONCALENDARGUI_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MOONCALENDARGUI_LIBRARY)
#  define MOONCALENDARGUISHARED_EXPORT Q_DECL_EXPORT
#else
#  define MOONCALENDARGUISHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MOONCALENDARGUI_GLOBAL_H
