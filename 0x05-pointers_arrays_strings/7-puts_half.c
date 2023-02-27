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
	int i = strlen(p) / 2;

	while (i < strlen(p))
	{
		_putchar(p[i]);
		i++;
	}
	_putchar('\n');
}
