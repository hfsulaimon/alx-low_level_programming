#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: character to check
 *
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	int value = c;

	if (isupper(value) > 0)
	{
		return (1);
	}
	else if (isupper(value) == 0)
	{
		return (0);
	}
	return (2);
}

