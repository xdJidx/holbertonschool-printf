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
	char *symbol;
	void (*print)(va_list varPrintf);
} printf_type;


#endif

