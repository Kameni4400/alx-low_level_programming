#include <stdio.h>
#include <unintd.h>

/**
*	Description: main - prints out Dora's quote,
*	Return: 0 if success.
*/
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, str, 59);
	return (1);
}
