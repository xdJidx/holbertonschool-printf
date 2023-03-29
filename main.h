#ifndef MAIN_H
#define MAIN_H

/******** Bibliothèque **********/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/******** Struct _printf **********/
typedef struct format
{
	char *opt;
	int (*call_func)(va_list);
} format_t;

/******** Function prototypes **********/
int _printf(const char *format, ...);
int _putchar(char c);
int set_char(va_list valist);
int set_string(va_list valist);
int print_percent(__attribute__((unused))va_list valist);

#endif
