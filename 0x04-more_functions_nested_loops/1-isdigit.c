#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if it's a digit, 0 if not
 */
int _isdigit(int c)
{
	int value = c;

	if (isdigit(value) > 0)
	{
		return (1);
	}

	else if (isdigit(value) == 0)
	{
		return (0);
	}
	return (2);
}
