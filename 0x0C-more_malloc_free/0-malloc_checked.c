#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * *malloc_checked - allocates memory
  * @b: memory size
  * Return: malloc function
  */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
	{
		exit(98);
	}
	return (malloc(b));
}

