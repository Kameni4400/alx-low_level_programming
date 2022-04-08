#include <stdio.h>

/**
*	Description: main - prints lowercase alphabet in reverse,
*	Return: 0 if success.
*/
int main(void)
{
	char alpha;

	for (alpha = 'z' ; alpha >= 'a' ; alpha--)
		putcahr(alpha);
	putchar('\n');
	return (0);
}
