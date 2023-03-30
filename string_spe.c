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
* set_decimal- function that returns an int to signed decimal
* @valist: arguments passed
* Return: length of integers
*/
int set_decimal(va_list valist)
{
	int index, diviseur, lengt;
	unsigned int num;

	index = va_arg(valist, int);
	diviseur = 1;
	lengt = 0;
	if (index < 0)
	{
		lengt += _putchar('-');
		num = index * -1;
	}
	else
	{
		num = index;
	}

	for (; num / diviseur > 9;)
	{
		diviseur *= 10;
	}

	for (; diviseur != 0;)
	{
		lengt += _putchar('0' + (num / diviseur));
		num %= diviseur;
		diviseur /= 10;
	}

	return (lengt);
}

/**
* length_of_integer - function that returns an int to signed decimal
* @number: integer
* Return: length of the integer
*/
int length_of_integer(int number)
{
	if (number < 0)
	{
		return (1 + length_of_integer(-number));
	}
	else if (number < 10)
	{
		return (1);
	}
	else
	{
		return (1 + length_of_integer(number / 10));
	}
}

/**
* print_percent - Prints a percent
* @valist: list of arguments
* Return: Will return the amount of characters printed.
*/
int print_percent(__attribute__((unused))va_list valist)
{
	_putchar('%');
	return (1);
}
