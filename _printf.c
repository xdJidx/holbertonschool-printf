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
	
	int indexFormat = 0, lenght = 0, indexOpt = 0;

	format_t funcs[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start (varPrintf, format);

	for (; format[indexFormat] != '\0'; indexFormat++) 
	{
		if (format[indexFormat] == '%')
		{
			for(; funcs[indexOpt].opt != NULL; indexOpt++)
			{
				if(format[IndexFormat + 1] == funcs[indexOpt].opt[0])
				{
					count = funcs[IndexOpt].call_func(valist);
					if (count == -1)
					{
						return (-1);
					}
					lenght += count;
					break;
				}
			}

		}
		else
		{
			putchar(format[indexformat]);
			lenght++;
		}

	}
	return (lenght);
	va_end(varPrintf);

	return (0);
}
