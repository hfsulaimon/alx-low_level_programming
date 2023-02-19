#include <stdio.h>

/**
* main - Entry point of C
* Return: 0
*/
int main(void)
{
	char alpha = 'z';

	while((int)alpha >= 97)
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
