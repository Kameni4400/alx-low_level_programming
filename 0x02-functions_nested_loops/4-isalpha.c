#include "main.h"

/**
*	_isalpha - Checks if a character is alphabetic.
*	@c: The checker to be checked.
*
*	Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
