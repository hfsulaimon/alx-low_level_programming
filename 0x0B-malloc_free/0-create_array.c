#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Prints array of chars
 * @size: size of the array
 * @c: element of the array
 * Return: a pointer to a dynamic memory allocation
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
