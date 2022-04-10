#include <stdio.h>

/**
*	Description: main - prints all possible combinations of single digit,
*	Return: 0 if success.
*/
int main(void)
{
	int i;

	i = 48;

	while (i < 58)

		putchar(i);
		if (i != 57)

			putchar(44);
			putchar(32);
		i++;

	putchar(10);
	return (0);
}
