#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *_strdup - Makes a copy of a given paramenters
 * @str: String passed as parameter
 * Return: a pointer to copy
 */
char *_strdup(char *str)
{
	char *r;
	long unsigned int i = 0;

	r = malloc(strlen(str));
	if (r == NULL)
	{
		return (NULL);
	}
	while (i < strlen(str))
	{
		r[i] = str[i];
		i++;
	}
	return (r);
}
