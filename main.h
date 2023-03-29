#ifndef MAIN_H
#define MAIN_H

/******** Bibliothèque **********/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/******** Struct _printf **********/
typedef struct _type{
    char *specifier;
    int (*printFunction)(va_list);
} _printfType;

/******** Function prototypes **********/
int _printf(const char *format, ...);
int _putchar(char c);

#endif
