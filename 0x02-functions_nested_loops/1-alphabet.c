#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case
 * @void - return nothing
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while ((int)alpha < 123)
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
