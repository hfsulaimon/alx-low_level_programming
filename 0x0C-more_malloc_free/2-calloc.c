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
	if ((nmemb == 0) || (size == 0))
		return (NULL);
	if (malloc(size * nmemb) == NULL)
		return (NULL);
	return ((void *)malloc(size * nmemb));
}
