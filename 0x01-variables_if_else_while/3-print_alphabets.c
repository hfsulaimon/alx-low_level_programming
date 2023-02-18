#include <stdio.h>

/**
* main - entry point of C
* Return: nothing
*/
int main(void)
{
	char lower, upper = 'a', 'A';
	/* while - loop through a condition */
	while ((int)lower < 123)
	{
		putchar(lower);
		lower++;
	}
	while((int)upper < 91)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}

