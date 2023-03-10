#include <string.h>

/**
 * *_strstr - Finds first occurence of substring
 * @haystack: String to be scanned
 * @needle: String to search for
 * Return: Pointer to haystack that matches needle
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
