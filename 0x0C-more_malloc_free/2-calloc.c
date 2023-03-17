#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - Allocates an array memory
 * @nmemb: No of elements of the array
 * @size: size of each element
 * Return: pointer to the allocated moemory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;
	/*return NULL if 0*/
	if ((nmemb == 0) || (size == 0))
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	/*set memory to zero */
	for (i = 0; i < (size * nmemb); i++)
	{
		p[i] = 0;
	}
	return (p);
}
