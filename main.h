#ifndef MAIN_H
#define MAIN_H

/******** Bibliothèque **********/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/******** Struct _printf **********/
/**
* struct format - This is a typedef struct.
* @opt: Pointer type char.
* @call_func: Pointer to call the function.
*/
typedef struct format
{
	char *opt;
	int (*call_func)(va_list);
} format_t;

/******** Function prototypes **********/
int _printf(const char *format, ...);
int parse_format(const char *format, format_t get_opt[], va_list valist);
int _putchar(char c);
int set_char(va_list valist);
int set_string(va_list valist);
int set_decimal(va_list valist);
int length_of_integer(int n);
int print_percent(__attribute__((unused))va_list valist);
int get_length(char *string __attribute__((__unused__)), va_list valist);

#endif
