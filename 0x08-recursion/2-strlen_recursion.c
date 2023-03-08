#include "main.h"

/**
 * _strlen_recursion - Prints length of a string
 * @s: String to print its length
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
		return;
	return (1 + _strlen_recursion(s + 1));
}
