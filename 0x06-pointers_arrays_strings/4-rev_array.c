#include "main.h"
#include <stdio.h>

/**
  * reverse_array - Reverses the content of an array
  * @a: The array
  * @n: size of the array
  * Return: no value
  */
void reverse_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		i = 0;
		n = n - 1;
		while (n >= i)
		{
			printf("%d", a[n]);
			if (n != 0)
			{
				printf(", ");
			}
			n--;
		}
		printf("\n");
	}
}

