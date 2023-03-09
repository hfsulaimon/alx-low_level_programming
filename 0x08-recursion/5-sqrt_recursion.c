#include "main.h"

/**
 * check_sqrt - Checks for the square
 * @num: Integer
 * @counter: Incrementor
 * Return: counter if it has square root
 * and -1 if it doesn't
 */
int check_sqrt(int num, int counter)
{
	if ((counter * counter) == num)
		return (counter);
	if (counter >= num)
		return (-1);
	return (check_sqrt(num, counter + 1));
}

/**
 * _sqrt_recursion- Print square root of num
 * @n: Integer
 * Return: square of a number
 */
int _sqrt_recursion(int n)
{
	int counter = 1;

	return (check_sqrt(n, counter));
}
