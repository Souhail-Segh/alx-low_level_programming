#include "main.h"
#include <stdio.h>

/**
* _powTwo - print a binary format of an int
* @power: the last power in which 2^power less than n
*
* Return: 2 ^ power
*/
unsigned long int _powTwo(int power)
{
unsigned long int n;

if (power == 0)
return (1);
if (power == 1)
return (2);
n = 1;
while (power >= 1)
{
n = n * 2;
power--;
}
return (n);
}


/**
 * set_bit - set the bit 1 in an index
 * @n: the integer number
 * @index: the bit in a specific position
 *
 * Return: 1 if succed, otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int res, i, num;
int flag;

flag = 0;
i = 0;
num = *n; 
while (num != 0)
{
res = num % 2;
if(i == index && res == 1)
flag = 1;
num /= 2;
i++;
}
if (flag == 1)
return (-1);
*n = *n + _powTwo(index);
return (1);
}
     
