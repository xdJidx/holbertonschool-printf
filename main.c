#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;
	char monString[55] = "Bonjour, je suis la variable String avec 54 caracters";
	int maVariableChar = 'C';
	int monInt = '9';
	double monFloat = 3.14159;

	_printf("Test un première phrase\n");
	_printf("Test ma premier Varibale Char -> %c\n", maVariableChar);
	_printf("Ma variable Char doit sortir la lettre C\n\n");
	_printf("Très bien, faisons une boucle for \"Affichier les lettres de A à Z\"\n\n");

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	printf("\n\n");

	_printf("Génial, il faut essayer un string maintenant.\"\n\n");

	_printf("Préparons nos variables\n");
	_printf("Je Test la variable string -> %s\n", monString);

	_printf("Nice ! Tout semble fonctionner\n");

	_printf("Est-ce que ça s'affiche ?? %d\n\n", monInt);

	_printf("Est-ce que ça s'affiche ?? %f\n\n", monFloat);

	_printf("Affiche 100%\0 \n\n", maVariableChar);

	_printf("Normalement la phrase suivente devrait être une Erreur\n");

	return (0);
}
