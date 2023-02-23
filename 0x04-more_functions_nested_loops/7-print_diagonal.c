#include "main.h"

/**
  * print_diagonal - Prints diagonal line
  * @n: the numbers of lines to print
  *
  * Return: no value
  */
void print_diagonal(int n)
{
	int num = n, i, j;

	if (num <= 0)
	{
		_putchar('\n');
	}
	else if (num > 0)
	{
		i = 0;
		while (i < num)
		{
			j = 0;
			while (j <= i)
			{
				if (j != i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('\\');
					_putchar('\n');
				}
				j++;
			}
			i++;
		}
	}
}
