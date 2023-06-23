#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_strings - diplay n strings by a separator
 * @separator: between strings
 * @n: number of strings
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list op;
	char *ar;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(op, n);
	while (i < n)
	{
		ar = va_arg(op, char *);
		if (ar != NULL)
			printf("%s", ar);
		else
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(op);
}
