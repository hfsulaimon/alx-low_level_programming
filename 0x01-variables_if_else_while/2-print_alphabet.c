#include <stdio.h>

/**
* main - entry point of C
* Return: nothing
*/
int main(void)
{
	char alpha = 'a';
   	/* While - loop statement*/
    	while (alpha != 'z')
    	{
        	putchar(alpha);
        	alpha++;
    	}
    	putchar('z\n');
    	return (0);
}
