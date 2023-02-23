#include "main.h"

/**
  * print_triangle - Prints a triangle
  * @size: the size of the triangle
  *
  * Return: nothing
  */
void print_triangle(int size)
{
	int s = size, i = 0, j;

	if (s <= 0)
	{
		_putchar('\n');
	}
	else if (s > 0)
	{
		while (i < s)
		{
			j = 9;
			while (j >= 0)
			{
				if (j <= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
				j--;
			}
			_putchar('\n');
			i++;
		}
	}
}
