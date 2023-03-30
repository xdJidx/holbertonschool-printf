#include "main.h"

/**
* _printf - function that prints based on format specifier
*
*/

int _printf(const char *format, ...)
{
	va_list valist;
	int count;
	format_t get_opt[] = {
		{"c", set_char},
		{"s", set_string},
		{NULL, NULL}
	};

	if (!format)
	{
		return (-1);
	}

	va_start(valist, format);
	count = parse_format(format, get_opt, valist);
	va_end(valist);

	return (count);
}
