#include <stdio.h>

/**
*	main - Prints out alphabet in lowercase and uppercase
*	Return: 0 if success
*/
int main(void)
{
	char alpha;
	char bet;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		putchar(alpha);
	for (bet = 'A' ; bet <= 'Z' ; bet++)
		putchar(bet);
	putchar('\n');
	return (0);
}
