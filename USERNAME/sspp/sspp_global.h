#ifndef SSPP_GLOBAL_H
#define SSPP_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SSPP_LIBRARY)
#  define SSPP_EXPORT Q_DECL_EXPORT
#else
#  define SSPP_EXPORT Q_DECL_IMPORT
#endif

#endif // SSPP_GLOBAL_H
