#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to check
 * @accept: substring of s
 * Return: An integer of byte size
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
