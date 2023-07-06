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
* _printBinary - print a binary format of an int
* @n: the integer to print in binary
* @power: the last power in which 2^power less than n
*
* Return: none
*/
void _printBinary(unsigned long int n, int power)
{
while (power >= 0)
{
if (n >= 2 * _powTwo(power))
{
_putchar('1');
n = n - 2 * _powTwo(power);
}
else
{
_putchar('0');
}
power--;
}
if (n == 1)
_putchar('1');
else
_putchar('0');
}


/**
* print_binary - print a binary format of an int
* @n: the integer to print in binary
*
* Return: none
*/

void print_binary(unsigned long int n)
{
int power;

power = 0;

if (n == 0)
{
_putchar('0');
return;
}

while (_powTwo(power) <= n)
{
if (_powTwo(power) == n)
{
_putchar('1');
while (power > 0)
{
_putchar('0');
power--;
}
return;
}
power++;
}
power = power - 2;
printf("%d\n", power);
_printBinary(n, power);
}
