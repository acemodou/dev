#include<cstdarg>
#include<cstdio>

#ifndef __HEADERS__H_INCLUDED
#define __HEADERS__H_INCLUDED


int message(const char * fmt, ...)
 {
     va_list ap;
     va_start(ap, fmt);
     int rc = vfprintf(stdout,fmt,ap);
     puts("");
     va_end(ap);
     return rc;
 }

#endif