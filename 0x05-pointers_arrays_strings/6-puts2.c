#include "main.h"
#include <string.h>

/**
  * puts2 - Prints every other character of a string
  * @str: the string to work with
  * Return: no value
  */
void puts2(char *str)
{
	char *value = str;
	int i = strlen(value), j = 0;

	while (j < i)
	{
		_putchar(value[j]);
		j = j + 2;
	}
	_putchar('\n');
}
