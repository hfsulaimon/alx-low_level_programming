#include <stdio.h>

/**
* main - Entry point of C
* Return: 0
*/
int main(void)
{
	int digit = 48;

	while (digit < 58)
	{
		putchar(digit);
		putchar(',');
		putchar(' ');
		digit++;
	}
	putchar('\n');
	return (0);
}

