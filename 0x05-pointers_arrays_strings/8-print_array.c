#include <stdio.h>
#include "main.h"

/**
  * print_array - Prints n elemens of an array
  * @a: the array
  * @n: size of the array
  * Return: no value
  */
void print_array(int *a, int n)
{
	int *p = a, size = n, i;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			printf("%d", p[i]);
			if (i < (size - 1))
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
}
