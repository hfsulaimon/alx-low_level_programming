#include <ctype.h>

/**
 * int _islower - checks for lowercase character
 * @c: the integer to check it case
 *
 * Return: 1 if lowercase
 * Return: 0 if not
 */
int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
	else if (islower(c) == 0)
	{
		return (0);
	}
}
