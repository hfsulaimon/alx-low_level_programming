#include <string.h>

/**
  * *_memset - Fills memory with a constant byte
  * @s: The memory
  * @b: The constant byte
  * @n: number of bytes to be filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
