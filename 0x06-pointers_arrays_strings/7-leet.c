#include "main.h"
#include <string.h>

/**
  * *leet - encodes a string
  * @s: the string to encode
  * Return: The encoded string
  */
char *leet(char *s)
{
	int i, j;
	char *str = "aeotl", *rep = "43071";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if ((s[j] == str[i]) || (s[j] == (str[i] - 32)))
			{
				s[j] = rep[i];
			}
			j++;
		}
		i++;
	}
	return (s);
}

