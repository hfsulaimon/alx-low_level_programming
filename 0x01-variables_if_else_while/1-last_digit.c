#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - entry point of C program
* Return: nothing
*/
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Get the last digit of n */
	last_digit = n % 10;
	/* if - conditional statement */
	printf("Last digit of %d is ", n);
	if (last_digit > 5)
	{
		printf("%d and is greater than 5\n", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("%d and is 0\n", last_digit);
	}
	else if ((last_digit < 6) && (last_digit != 0))
	{
		printf("%d and is less than 6 and not 0\n", last_digit);
	}
	return (0);
}
