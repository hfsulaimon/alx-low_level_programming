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
		if (digit != 57)
		{
			putchar(digit);
			putchar(',');
			putchar(' ');
			digit++;
		}
		else 
		{
			putchar(digit);;
			digit++;
		}
	}
	putchar('\n');
	return (0);
}

