#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: the double pointer
 * @to: the pointer
 * Return - no return value
 */
void set_string(char **s, char *to)
{
	*s = to;
}
