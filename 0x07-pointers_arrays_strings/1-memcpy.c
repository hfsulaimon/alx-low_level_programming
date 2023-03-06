#include <string.h>

/**
  * *_memcpy - Copies memory area
  * @dest: Memory to copy to
  * @src: Memory to copy from
  * @n: number of bytes to be filled
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
