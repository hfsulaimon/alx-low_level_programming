#include <string.h>
#include "main.h"

/**
  * print_rev - Prints a string in reverse
  * @s: the string to print in reverse
  * Return: no value
  */
void print_rev(char *s)
{
	int i = strlen(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
