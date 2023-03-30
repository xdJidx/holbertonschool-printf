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
	int index = 0, j = 0;

	printf_type funcs[] = {
		{"c", print_char},
		{"s", print_string},
		{"NULL", "NULL"}
	};

	va_start (varPrintf, format);

	for (; *BrowseToChar != '\0'; ++BrowseToChar) 
	{
		if (*BrowseToChar == '%')
		{
			++BrowseToChar;
			while (funcs[index].symbol != NULL && *(funcs[index].symbol) != *format)
		    	index++;
			return (funcs[index].print);

		}
	
	
	



		putchar(*BrowseToChar);
	}

	va_end(varPrintf);

	return (0);
}
