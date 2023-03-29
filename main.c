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

     _printf("Let's try to printf a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
	_printf("Test 100% s'affiche ??\n");
	_printf("Bonjour %s %%\n", monString);

	_printf("Bonjour %c %%\n", c);
	printf("Bonjour %c %%\n", c);
    return (0);
}
