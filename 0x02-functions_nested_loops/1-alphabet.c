#include "main.h"

/**
*	Description: prints the alphabet in lowercase, with new line,
*	Return: 0 if success.
*/
void print_alphabet(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		_putchar(letter);

	_putchar('\n');
}
