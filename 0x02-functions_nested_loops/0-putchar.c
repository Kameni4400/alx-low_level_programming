#include <stdio.h>

/**
*	main - print _putchar, followed by a new line,
*
*	Return: 0 if success.
*/
int main(void)
{
	char h[] = "putchar";
	int m;

	m= 0;

	while (m <= 8)
	{
		_putchar(h[m]);
		m++;
	}
	_putchar('\n');

	return (0);
}
