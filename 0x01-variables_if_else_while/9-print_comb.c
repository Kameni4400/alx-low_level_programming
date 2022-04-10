#include <stdio.h>

/**
*	Description: main - prints all possible combinations of single digit,
*	Return: 0 if success.
*/
int main(void)
{
	int numb;

	for (numb = 0 ; numb <= 9 ; numb++)
	{
		putchar((numb % 10) + '0');

		if (numb == 9)
			continue;


			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
