#include "main.h"

/**
* parse_format - Receives the main string and all the necessary parameters to
* print a formated string.
* @format: A string containing all the desired characters.
* @get_opt: A list of all the posible functions.
* @valist: A list containing all the argumentents passed to the program.
* Return: A total count of the characters printed
*/
int parse_format(const char *format, format_t get_opt[], va_list valist)
{
	int indexFormat, indexOpt, count, total_characters = 0;

	for (indexFormat = 0; format[indexFormat] != '\0'; indexFormat++)
	{
		if (format[indexFormat] == '%')
		{
			for (indexOpt = 0; get_opt[indexOpt].opt != NULL; indexOpt++)
			{
				if (format[indexFormat + 1] == get_opt[indexOpt].opt[0])
				{
					count = get_opt[indexOpt].call_func(valist);
					if (count == -1)
					{
						return (-1);
					}
					total_characters += count;
					break;
				}
			}
			if (get_opt[indexOpt].opt == NULL && format[indexFormat + 1] != ' ')
			{
				if (format[indexFormat + 1] != '\0')
				{
					_putchar(format[indexFormat]);
					_putchar(format[indexFormat + 1]);
					total_characters = total_characters + 2;
				}
				else
					return (-1);
			}
			indexFormat = indexFormat + 1;
		}
		else
		{
			_putchar(format[indexFormat]);
			total_characters++;
		}
	}
	return (total_characters);
}

