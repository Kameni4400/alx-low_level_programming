#include "main.h"

/**
*	Description: main - print the alphabet in lowercase,
*	Return: 0 if success.
*/
void print_alphabet(void)
{

	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
