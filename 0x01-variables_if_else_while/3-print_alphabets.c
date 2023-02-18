#include <stdio.h>

/**
* main - entry point of C
* Return: nothing
*/
int main(void)
{
	char lower, upper;
	/* while - loop through a condition */
	lower = 'a';
	while ((int)lower < 123)
	{
		putchar(lower);
		lower++;
	}
	upper = 'A';
	while((int)upper < 91)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}

