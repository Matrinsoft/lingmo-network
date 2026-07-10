#pragma once

#include <QtCore/qglobal.h>

#if defined(LINGMO_NETWORK_LIBRARY)
#  define LINGMO_NETWORK_EXPORT Q_DECL_EXPORT
#else
#  define LINGMO_NETWORK_EXPORT Q_DECL_IMPORT
#endif
