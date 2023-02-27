#include "main.h"
#include <string.h>

/**
  * puts_half - Prints half of a string
  * @str: the string to work with
  * Return: no value
  */
void puts_half(char *str)
{
	char *p = str;
	int j = strlen(p), i;

	if ((j % 2) == 0)
	{
		i = j / 2;
	}
	else
	{
		i = (j - 1) / 2;
	}
	while (i < j)
	{
		_putchar(p[i]);
		i++;
	}
	_putchar('\n');
}
