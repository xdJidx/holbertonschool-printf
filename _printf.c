#include "main.c"
#include <stdio.h>
#include <stdarg.h>

/**
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list varPrintf;
	const char *BrowseToChar = format;

	printf_type funcs[] = {
		{"c", print_char},
		{"s", print_string}
	};

	va_start (varPrintf, format);

	for (; *BrowseToChar != '\0'; ++BrowseToChar) 
	{
		if (*BrowseToChar == '%')
		{
			++BrowseToChar;
			if (*

		}
	
	
	



		putchar(*BrowseToChar);
	}

	va_end(varPrintf);
}
