#include "main.h"

/**
 * _pow_recursion - Print x raise to power y
 * @x: Interger
 * @y: Interger
 * Return - Result of x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y-1));
}
