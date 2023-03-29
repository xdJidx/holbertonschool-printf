#ifndef PROTOTYPE_H
#define PROTOTYPE_H

/******** Bibliothèque **********/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/******** Function prototypes **********/
int _printf(const char *format, ...);

typedef struct {
    char *specifier;
    int (*printFunction)(va_list);
} _printfType;

#endif
