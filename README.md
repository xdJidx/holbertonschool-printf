# <p align="Center">C - _printf</p>

<img src="https://www.zupimages.net/up/23/13/7g7z.png" width="100%"><br><br>

## Resources

> This project consists of redesigning the printf function.  <br>

- printf 
> Is an external function included in the library of C standard functions.  
It is used to display information from the program on the screen.  
It takes a variable number of arguments: Its first argument is a character string specifying the display format.  
The following arguments are the values ​​that should be displayed.  
It is the content of the format that allows to say how the following arguments will be displayed:  
- 	printf("Hello Holberton");  

> We are going to rewrite this function which we will name: _printf.
- _printf("Hi everyone !");

--------------------

## Tableau and Organigramme:

- This table represents all the functions found in the file [string_spe.c](https://github.com/xdJidx/holbertonschool-printf/blob/main/string_spe.c) | Updates may be added...

|Specifiers|Functions|Description| 
|--|--|--|
|c|set_char|print just a char| 
|s|set_string|print a string| 
|d|set_decimal|print a number in base 10|
|i|set_decimal|print a number in base 10|

<br>

- This image represents our action plan.

<img src="https://www.zupimages.net/up/23/13/d2sq.png" width="100%"><br><br>

--------------------

## Read or Watch: 

- [Approaching a Project](https://intranet.hbtn.io/concepts/881)
- [Group Projects](https://intranet.hbtn.io/concepts/893)
- [Pair Programming - How To](https://intranet.hbtn.io/concepts/894)
- [Flowcharts](https://intranet.hbtn.io/concepts/895)

--------------------

## Man or Help
> `man_3_printf` = Being created...

--------------------

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/main/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/main/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `main.h`
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the `_putchar` function for this project

--------------------

## Authorized functions and macros

- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

--------------------

<br>

# Files
### [_printf.c](https://github.com/xdJidx/holbertonschool-printf/blob/main/_printf.c)
<details>
<summary>File</summary>
<br>

```c
#include "main.h"

/**
* _printf - function that prints based on format specifier
* @format: takes in format specifier
* Return: return pointer to index
*/

int _printf(const char *format, ...)
{
	va_list valist;
	int count;
	format_t get_opt[] = {
		{"c", set_char},
		{"s", set_string},
		{"d", set_decimal},
		{"i", set_decimal},
		{"%", print_percent},
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
```
</details>
<br>

--------------------

### [_putchar.c](https://github.com/xdJidx/holbertonschool-printf/blob/main/_putchar.c)
<details>
<summary>File</summary>
<br>

```c
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
```
</details>
<br>

--------------------

### [_vsprintf](https://github.com/xdJidx/holbertonschool-printf/blob/main/_vsprintf.c)
<details>
<summary>File</summary>
<br>

```c
#include "main.h"
/**
* parse_format - Receives the main string and all the necessary parameters to
* print a formated string.
* @format: A string containing all the desired characters.
* @get_opt: A list of all the posible functions.
* @valist: A list containing all the argumentents passed to the program.
* Return: A total count of the characters printed.
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
						return (-1);
					total_characters += count;
					break;
				}
			}
			if (format[indexFormat] == '\0')
				break;
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
```
</details>
<br>

--------------------

### [main.h](https://github.com/xdJidx/holbertonschool-printf/blob/main/main.h)
<details>
<summary>File</summary>
<br>

```h
#ifndef MAIN_H
#define MAIN_H

/******** Bibliothèque **********/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/******** Struct _printf **********/
/**
* struct format - This is a typedef struct.
* @opt: Pointer type char.
* @call_func: Pointer to call the function.
*/
typedef struct format
{
	char *opt;
	int (*call_func)(va_list);
} format_t;

/******** Function prototypes **********/
int _printf(const char *format, ...);
int parse_format(const char *format, format_t get_opt[], va_list valist);
int _putchar(char c);
int set_char(va_list valist);
int set_string(va_list valist);
int set_decimal(va_list valist);
int length_of_integer(int n);
int print_percent(__attribute__((unused))va_list valist);
int get_length(char *string __attribute__((__unused__)), va_list valist);

#endif

```
</details>
<br>

--------------------

### [string_spe.c](https://github.com/xdJidx/holbertonschool-printf/blob/main/string_spe.c)
<details>
<summary>File</summary>
<br>

```c
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

	if (string == 0)
	{
		string = '\0';
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
```
</details>
<br>

------------------------------

# Author
ROGERET Kevin : **[Air-KS](https://github.com/Air-KS).** <br>
> Project carried out within the framework of the school **[Holberton School](https://www.holbertonschool.com/).**<br>

