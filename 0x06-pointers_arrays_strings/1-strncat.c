#include "main.h"
#include <string.h>

/**
  * *_strncat - Concatenates two strings at most n bytes
  * @dest: Destination string
  * @src: Source string
  * @n: n bytes of strings
  * Return: the pointer to destination string in char type
  */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
