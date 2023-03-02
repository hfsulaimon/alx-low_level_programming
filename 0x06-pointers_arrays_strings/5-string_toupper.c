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
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
			i++;
		}
	}
	printf("\n");
	return (s);
}
