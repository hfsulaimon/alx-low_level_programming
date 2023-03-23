#include <stdarg.h>

/**
  * sum_them_all - Sums all parameters
  *
  * @n: first argument
  * @...: ellipsis (unlimited number of variable)
  *
  * Return: integer value
  */
int sum_them_all(const unsigned int n, ...)
{
	int sumv = 0;
	unsigned int i;
	va_list value;

	if (n == 0)
		return (0);
	va_start(value, n);
	for (i = 0; i < n; i++)
		sumv += va_arg(value, int);
	va_end(value);
	return (sumv);
}

