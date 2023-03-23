#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
  * print_numbers - Prints integers passed to the function
  * @separator: string
  * @n: number of interger
  * @...: accepts unlimited number of arguments
  * Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);
	for (i = 0; i <= (n - 1); i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(num, int));
		else
		{
			printf("%d", va_arg(num, int));
			if (i != (n - 1))
				printf("%s", separator);
		}
	}
	printf("\n");
}

