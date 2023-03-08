#include "main.h"

/**
 * _print_rev_recursion - Reverse a string recursively
 * @s: String to reverse
 * Return: no value
 */
void _print_rev_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
