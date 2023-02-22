#include <ctype.h>

/**
 * _islower - checks for lowercase character
 * @c: the integer to check it case
 *
 * Return: 1 if lowercase, 0 if not.
 */
int _islower(int c)
{
	int alpha = c;

	if (islower(alpha) > 0)
	{
		return (1);
	}
	else if (islower(alpha) == 0)
	{
		return (0);
	}
	return (2);
}
