#include "main.h"
#include <string.h>

/**
  * _strcmp - Compares two strings
  * @s1: first string
  * @s2: Second string
  * Return: value < 0,s1 is bigger,
  * value > 0, s2 is bigger,
  * value = 0, Both s1 and s2 are same sizes in memory
  */
int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}
