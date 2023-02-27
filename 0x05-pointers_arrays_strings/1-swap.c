#include "main.h"

/**
  * swap_int - Swaps two integers
  * @a: Integer a
  * @b: Integer b
  * Return: no return value
  */
void swap_int(int *a, int *b)
{
	int *p = a, *pp = b, c, d;

	c = *p;
	d = *pp;
	*p = d;
	*pp = c;
}

