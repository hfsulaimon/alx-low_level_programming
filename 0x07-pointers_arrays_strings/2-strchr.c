#include <string.h>

/**
 * *_strchr - Locates a character in a string
 * @s: The string to search from
 * @c: The character to search for
 * Return: Pointer to the first character 
 * or NULL if not found
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
