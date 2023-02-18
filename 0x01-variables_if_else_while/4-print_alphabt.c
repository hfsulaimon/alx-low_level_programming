#include <stdio.h>

/**
* main - entry point of C
* Return: 0
*/
int main(void)
{
	char lower = 'a';
	/* while - loop condition until false */
	while ((int)lower < 123)
	{
		if (!(lower == 'e' || lower == 'q'))
		{
			putchar(lower);
		}
		lower++;
	}
	putchar('\n');
	return (0);
}
