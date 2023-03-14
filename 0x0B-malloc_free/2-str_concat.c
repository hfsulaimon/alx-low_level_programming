#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * *str_concat - concatenates two strings
 * @s1: First String
 * @s2: Second String
 * Return: a pointer to concanated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned long int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s3 = malloc(strlen(s1) + strlen(s2) + 1);
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (i < strlen(s1))
	{
		s3[i] =  s1[i];
		i++;
	}
	j = strlen(s3);
	for (i = 0; i < strlen(s2); i++)
	{
		s3[j] = s2[i];
		++j;
	}
	return (s3);
}
