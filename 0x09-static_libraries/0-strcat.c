#include "main.h"
#include <string.h>

/**
  * *_strcat - Concatenates two strings
  * @dest: Destination
  * @src: Source
  * Return: a pointer of type char
  */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
