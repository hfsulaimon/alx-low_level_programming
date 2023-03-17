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
	unsigned long int i, j, length1, length2;
	/* treat NULL as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* get the length of s1 and s2 */
	length1 = length2 = 0;
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	/*sets n to length of s2 if greater or equal */
	if (n >= length2)
		n = length2;
	/*allocate memory to s3*/
	s3 = malloc((length1 + n + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (i < length1)
	{
		s3[i] =  s1[i];
		i++;
	}
	/*add s2 to s3 */
	for (j = 0; j < n; i++)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
