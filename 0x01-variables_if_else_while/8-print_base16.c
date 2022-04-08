#include <stdio.h>

/**
*	Description: main - prints all numbers of base,
*	Return: 0 if success.
*/
int main(void)
{
	int numb;
	char alphab;

	for (numb = 48 ; numb <= 57 ; numb++)
		putchar(numb);
	for (alphab = 97 ; alphab <= 102 ; alphab++)
		putchar(alphab);
	putchar('\n');
	return (0);
}	
