#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
  * print_strings - Prints all variables
  *
  * @separator: String
  * @n:  Number of string passed
  * @...: ellipsis
  *
  * Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	const char *nextValue;

	va_start(str, n);
	for (i = 0; i <= (n - 1); i++)
	{
		nextValue = va_arg(str, char*);
		if (separator == NULL)
			printf("%s", nextValue);
		if (nextValue == NULL)
			printf("nil");
		else
		{
			printf("%s", nextValue);
	       		if (i < (n - 1))
				printf("%s", separator);
		}
	}
	va_end(str);
	printf("\n");
}
