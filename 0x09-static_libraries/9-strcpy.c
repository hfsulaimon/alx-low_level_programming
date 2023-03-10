#include "main.h"
#include <string.h>

/**
  * *_strcpy - Copies a string
  * @dest: Destination
  * @src: Source
  * Return: point to destination
 */
char *_strcpy(char *dest, char *src)
{
	char *d = dest, *s = src;

	return (strcpy(d, s));
}
