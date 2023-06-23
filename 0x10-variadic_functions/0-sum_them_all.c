#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - entry function that sum all optional args
 * @n: number of numbers
 * Return: 0 if n == 0, otherwise sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(op, n);

	while (i < n)
	{
		sum += va_arg(op, int);
		i++;
	}

	va_end(op);
	return (sum);
}
