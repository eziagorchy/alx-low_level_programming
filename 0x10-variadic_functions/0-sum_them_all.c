#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all parameters.
 * @n: type unsigned int
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list valist;


	if (n == 0)
		return (0);

	va_start(valist, n);

	while (i < n)
	{
		sum = sum + va_arg(valist, int);
		i++;
	}
	va_end(valist);
	return (sum);
}
