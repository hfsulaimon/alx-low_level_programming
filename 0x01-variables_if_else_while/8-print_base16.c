#include <stdio.h>

/**
* main - Entry point of C
* Return: 0
*/
int main(void)
{
	char digit, alpha;

	digit = 48;
	while (digit < 58)
	{
		putchar(digit);
		digit++;
	}
	alpha = 'a';
	while ((int)alpha < 103)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
