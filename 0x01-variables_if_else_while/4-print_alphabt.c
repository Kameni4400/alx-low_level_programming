#include <stdio.h>

/**
*	Description: main - prints out alphabt in lowercase,
*	Return: 0 if success.
*/
int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)

		if (alpha != 'q' && alpha != 'e')

			putchar(alpha);
	putchar('\n');
	return (0);
}
