#include "main.h"

/**
 * factorial - Finds the factorial of a number
 * @n: Given number
 * Return: Result of factorial
 */
int factorial(int n)
{
	/* Base case */
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
