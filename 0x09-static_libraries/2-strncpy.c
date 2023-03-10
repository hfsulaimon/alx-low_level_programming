#include "main.h"
#include <string.h>

/**
  * *_strncpy - Copy a string at n bytes
  * @dest: Destination string
  * @src: Source string
  * @n: n bytes of characters to copy
  * Return: the pointer of destination string
  */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
