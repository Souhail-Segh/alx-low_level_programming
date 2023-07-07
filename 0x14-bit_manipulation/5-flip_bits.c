#include "main.h"

/**
 * flip_bits - how much flips we need between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  unsigned int flips, flag;

flips = 0;
flag = 0;
while (n > m)
{
flag = 1;
n = n >> 1;
flips++;
}
while (m > n && flag == 0)
{
m = m << 1;
flips++;
}
return (flips);
}
