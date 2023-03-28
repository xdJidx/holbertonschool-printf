#include "main.h"

/**
*
*
*
*/

int _printf(const char *format, ...)
{
	int count = 0;
	const char *BrowseToCharacters = format;

	va_list variablesPrintf;

	va_start(variablesPrintf, format);

/* Parcourt chaque caractère de la chaîne de format */
	for (; *BrowseToCharacters != '\0'; ++BrowseToCharacters)
	{
		if (*BrowseToCharacters == '%')
		{
			++BrowseToCharacters; /* Avance le pointeur pour lire le spécificateur de conversion */

			switch (*BrowseToCharacters)
			{
				case 'c': /* %c - Type Char */
				putchar(va_arg(variablesPrintf, int));
				++count;
				break;

				case 'd': /* %d - Type Decimal */
				putchar(va_arg(variablesPrintf, int));
				++count;
				break;

				case 'f': /* %f - Type Float - Fonctionne pas, à revoir */
				putchar(va_arg(variablesPrintf, double));
				++count;
				break;

				case 's': /* %s - Type String */
				count += puts(va_arg(variablesPrintf, const char *));
				break;

/* Si le spécificateur est "%", on imprime simplement un pourcentage */
				case '\0':
				
				putchar('%');
				++count;
				break;

/* Si le spécificateur n'est pas reconnu, on affiche un message 
 d'erreur et on arrête le programme avec exit */
				default:
				fputs("Error: Fomat invalide string : Please enter a new string format\n\n", stderr);
				exit(EXIT_FAILURE);
			}
		} else {
/* Si le caractère n'est pas un caractère de format, on l'affiche directement */
			putchar(*BrowseToCharacters);
			++count;
		}
	}
	/* On termine la liste d'arguments variables avec va_end */ 
	va_end(variablesPrintf);

	/* On retourne le nombre total de caractères imprimés */
	return (count);
}
