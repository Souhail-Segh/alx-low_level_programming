#include "main.h"

/**
 * factorial - Calculate the factorial
 * @n: the number to calculate factorial for
 * Return: The result of the calculation
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
