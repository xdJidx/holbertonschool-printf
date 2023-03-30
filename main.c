#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char c ='Z';
	char monString[55] = "Bonjour, je suis la variable String avec 54 caracters";
	int len, len2;

     printf("Printf => Let's try to printf a simple sentence.\n");
    _printf("_Printf => Let's try to printf a simple sentence.\n\n");

    printf("Printf => Character:[%c]\n", 'H');
    _printf("_Printf => Character:[%c]\n\n", 'H');

    printf("Printf => String:[%s]\n", "I am a string !");
    _printf("_Printf => String:[%s]\n\n", "I am a string !");

	printf("Printf => Test 200%% s'affiche ??\n");
	_printf("_Printf => Test 200%% s'affiche ??\n\n");

	printf("Printf => Bonjour %s %%\n", monString);
	_printf("_Printf => Bonjour %s %%\n\n", monString);

	printf("Printf => Bonjour %c %%\n", c);
	_printf("_Printf => Bonjour %c %%\n\n", c);

	len = _printf("%c", '\0');
	len2 = printf("%c", '\0');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}

	return (0);
}
