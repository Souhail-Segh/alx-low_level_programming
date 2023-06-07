#include "main.h"

int is_prime_number_helper(int n, int i);

/**
* is_prime_number - checking if a number is  prime number
* @n: number to check if it is a prime number
* Return: prime number if found else 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number_helper(n, 2));
}


/**
* is_prime_number_helper - checking if a number is  prime number
* @n: number to check if it is a prime number
* @i: an iterator
* Return: prime number if found else 0
*/

int is_prime_number_helper(int n, int i)
{
	if (i >= n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_number_helper(n, i + 1));
}
