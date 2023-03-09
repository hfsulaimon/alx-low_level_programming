#include "main.h"

/**
 * check_prime - Checks for prime numbers
 * @num: Integer
 * @counter: Incrementor
 * Return: counter if it has square root
 */
int check_prime(int num, int counter)
{
	if ((num % counter) == 0)
		return (0);
	if (counter >= (num / 2))
		return (1);
	return (check_prime(num, counter + 1));
}

/**
 * is_prime_number - Checks for prime number
 * @n: Integer
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int counter = 3;

	if (n <= 1)
		return (0);
	return (check_prime(n, counter));
}
