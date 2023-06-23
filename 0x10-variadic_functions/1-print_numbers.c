#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_numbers - diplay n numbers by a separator
 * @separator: between numbers
 * @n: number of number
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list op;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(op, n);
	while (i < n)
	{
		printf("%d", va_arg(op, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(op);
}
