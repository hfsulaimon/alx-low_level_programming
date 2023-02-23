#include <stdio.h>
#include "main.h"

/**
  * main - Prints number 1 - 100
  *
  * Return: 0 Success
  */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
}
