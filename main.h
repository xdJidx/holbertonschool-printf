#ifndef PROTOTYPE_H
#define PROTOTYPE_H

/******** Bibliothèque **********/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/******** Function prototypes **********/
int _printf(const char *format, ...);

/******** Struct _printf **********/
typedef struct _printerf
{
	char *opt;
	void (*call_func)(va_list varPrintf);
} format_t;


#endif

