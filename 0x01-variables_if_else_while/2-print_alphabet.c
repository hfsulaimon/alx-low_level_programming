#include <stdio.h>

/**
* main - entry point of C
* Return: nothing
*/
int main(void)
{
	char alpha = 'a';
	/* While - loop statement*/
	while ((int)alpha < 123)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
