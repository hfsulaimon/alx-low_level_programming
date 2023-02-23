#include "main.h"

/**
  * print_line - Print line on the terminal
  * @n: number of times a line will be printed
  *
  * Return: no value
  */
void print_line(int n)
{
	int n_of_line = n, i;

	if (n_of_line <= 0)
	{
		_putchar('\n');
	}
	else if (n_of_line > 0)
	{
		i = 0;
		while (i < n_of_line)
		{
			__putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
