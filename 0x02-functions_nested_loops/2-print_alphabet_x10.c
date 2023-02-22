#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 * @void - returns nothing
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i = 0;

	while (i < 10)
	{
		alpha = 'a';
		while ((int)alpha < 123)
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
