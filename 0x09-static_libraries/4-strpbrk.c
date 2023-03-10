#include <string.h>

/**
 * *_strpbrk - Searches a string for any of a set of bytes
 * @s: String to be scanned
 * @accept: String containing characters to match
 * Return: Pointer to s that matches accept
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
