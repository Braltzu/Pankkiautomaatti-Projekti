#ifndef RESTAPI_VALMIS_GLOBAL_H
#define RESTAPI_VALMIS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RESTAPI_VALMIS_LIBRARY)
#  define RESTAPI_VALMIS_EXPORT Q_DECL_EXPORT
#else
#  define RESTAPI_VALMIS_EXPORT Q_DECL_IMPORT
#endif

#endif // RESTAPI_VALMIS_GLOBAL_H
