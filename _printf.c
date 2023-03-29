#include "main.h"

/**
*
*
*
*/

int _printf(const char *format, ...)
{
/*On initialise une variable qui va compter le nombre de caractères imprimés.*/
	int counter = 0;

/*On initialise une variable de type "va_list" qui permettra de récupérer les arguments variables.*/
	va_list specificateur;

	va_start(specificateur, format);

/*// Tant que l'on a pas atteint la fin de la chaîne de caractères format, on continue à itérer.*/
	while (*format)
	{
		if (*format == '%')
		{
/*Si le caractère courant est un pourcentage, on passe au caractère suivant.*/
			format++;

/*On effectue une condition pour chaque type de conversion possible.*/
			switch (*format)
			{
				case 'c':
				{
/*// Si le caractère suivant est un 'c', on récupère l'argument correspondant et on l'affiche.*/
					char c = va_arg(specificateur, int);

					putchar(c);
					counter++;
					break;
				}

				case 's':
				{
/*Si le caractère suivant est un 's', on récupère l'argument correspondant et on l'affiche.*/
					char *s = va_arg(specificateur, char *);

					fputs(s, stdout);
					counter += strlen(s);
					break;
				}

				case '%':
				{
/*// Si le caractère suivant est un pourcentage, on l'affiche simplement.*/
					putchar('%');
					counter++;
					break;
				}

				default:
				{
/*Si le caractère suivant ne correspond à aucun des cas précédents, on affiche simplement le pourcentage suivi du caractère.*/
					putchar('%');
					putchar(*format);
					counter += 2;
					break;
				}
			}
		}
		else
		{
/*Si le caractère courant n'est pas un pourcentage, on l'affiche simplement.*/
			putchar(*format);
			counter++;
		}
/*On passe au caractère suivant dans la chaîne de caractères format.*/
		format++;
	}
/*On termine la récupération des arguments variables.*/
	va_end(specificateur);

/*On retourne le nombre total de caractères imprimés.*/
	return (counter);
}
