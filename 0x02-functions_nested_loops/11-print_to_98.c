#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print natural numbers to 98
 * @n: the input number
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int v = n;

	if (v > 98)
	{
		while (v >= 98)
		{
			printf("%d", v);
			if (v > 98)
			{
				printf(", ");
			}
			v--;
		}
	}
	else if (v < 98)
	{
		while (v <= 98)
		{
			printf("%d", v);
			if (v < 98)
			{
				printf(", ");
			}
			v++;
		}
	}
	else if (v == 98)
	{
		printf("%d", v);
	}
	printf("\n");
}
