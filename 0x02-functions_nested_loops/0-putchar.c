#include "main.h"

/**
* main - prints _putchar
* Return: 0 Success
*/
int main(void)
{
	char *words = "_putchar";
	int i = 0;

	while(i < 9)
	{
		_putchar(words[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
