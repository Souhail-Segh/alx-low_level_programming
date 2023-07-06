#include "main.h"

/**
 * get_bit - get the bit in an index
 * @n: the integer number
 * @index: the bit in a specific position
 *
 * Return: the bit in a specific position, otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int res, i;

i = 0;
while (n != 0)
{
res = n % 2;
if(i == index)
return (res);
n /= 2;
i++;
}
return (-1);
}
     
