#include "main.h"

/**
  * print_square - Prints a square
  * @size: The size of the square
  *
  * Return: no value to return
  */
void print_square(int size)
{
	int s = size, i, j;

	if (s <= 0)
	{
		_putchar('\n');
	}
	else if (s > 0)
	{
		i = 0;
		while (i < s)
		{
			j = 0;
			while (j < s)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
