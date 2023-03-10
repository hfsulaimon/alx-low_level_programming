#include <ctype.h>

/**
 * _isalpha - checks for aplhabetic character
 * @c: The integer to check
 *
 * Return: 0 if interger is an alphabet, 0 if not
 */
int _isalpha(int c)
{
	int alpha = c;

	if (isalpha(alpha) > 0)
	{
		return (1);
	}
	else if (isalpha(alpha) == 0)
	{
		return (0);
	}
	return (2);
}

