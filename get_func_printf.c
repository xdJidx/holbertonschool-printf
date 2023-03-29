#include "main.h"
#include <stdio.h>

/**
 *
 *
 */

void print_char(va_list arg)
{
	char letter;
	letter = va_arg(arg, int);
	putchar(letter);
}


/**
 *
 *
 *
 */

void print_string(va_list arg)
{
	char *str;
	str = va_arg(arg, char *);
	if (str == NULL)
	{
		puts("nil");
		return;
	}
	puts(str);
}

/**
 *
 *
 */


