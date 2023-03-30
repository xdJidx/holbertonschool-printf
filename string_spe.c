#include "main.h"

/**
* set_string - specificer s
* @valist: valist
* Return: total characters
*/
int set_string(va_list valist)
{
	int index;
	char *string;

	string = va_arg(valist, char*);

	if (string == NULL)
	{
		string = "(null)";
	}

	for (index = 0; string[index] != '\0'; index++)
	{
		_putchar(string[index]);
	}

	return (index);
}

/**
* set_char - specificer c
* @valist: valist
* Return: void
*/
int set_char(va_list valist)
{
	char string;

	string = va_arg(valist, int);

	if (string == '\0')
	{
		return (0);
	}

	_putchar(string);

	return (1);
}

/**
* print_percent - Prints a percent symbol
* @valist: list of arguments
* Return: Will return the amount of characters printed.
*/
int print_percent(__attribute__((unused))va_list valist)
{
	_putchar('%');
	return (1);
}
