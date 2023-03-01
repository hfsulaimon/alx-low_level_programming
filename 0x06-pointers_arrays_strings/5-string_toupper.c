#include "main.h"
#include <string.h>
#include <stdio.h>

/**
  * *string_toupper - Changes a string to uppercase
  * @s: the string to change its case
  * Return: The pointer to the string
  */
char *string_toupper(char *s)
{
	return (strupr(s));
}
