#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - Concats nbytes of a string
 * @s1: First String
 * @s2: Second String
 * @n: no of bytes to copy from s2
 * Return: pointer to a new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned long int i, j;
	/* treat NULL as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*sets n to length of s2 if greater or equal */
	if (n >= strlen(s2))
		n = strlen(s2);
	/*allocate memory to s3*/
	s3 = malloc(strlen(s1) + n + 1);
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (i < strlen(s1))
	{
		s3[i] =  s1[i];
		i++;
	}

	j = strlen(s3);
	for (i = 0; i < n; i++)
	{
		s3[j] = s2[i];
		++j;
	}
	return (s3);
}
