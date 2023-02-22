#include "main.h"

/**
 * print_sign - Prints sign of a number
 * @n: The number to print its sign
 *
 * Return: 1 for positive, 0 for zero, -1 for negative
 */
int print_sign(int n)
{
	int num = n;

	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (2);
}
