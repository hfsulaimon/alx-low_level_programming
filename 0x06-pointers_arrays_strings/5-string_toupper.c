#include "main.h"
#include <string.h>
#include <stdio.h>

/**
  * *string_toupper - Changes a string to uppercase
  * @s: the string to change its case
  * Return: The pointer to the string
  */
char *string_toupper(char *s)
{
	int i = 0, size;

	size = strlen(s);
	while (i <= size)
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
			i++;
		}
	}
	return (s);
}
