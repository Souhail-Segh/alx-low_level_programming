#include "main.h"

int sqrt_helper(int n, int i);

/**
* _sqrt_recursion - calculate the natural square root of a number
* @n: number to calculate the square root of
* Return: sqrt(n), else -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_helper(n, 2));
}

/**
* sqrt_helper - recurses to find the qart
* @n: number to calculate the sqaure root of
* @i: the iterator that will be returned as sqrt
* Return: square root if found else -1
*/

int sqrt_helper(int n, int i)
{
	if (i >= n / 2)
		return (-1);
	if (n == (i * i))
		return (i);
	return (sqrt_helper(n, i + 1));
}
