#include "main.h"

/**
 * binary_to_uint - convert a binary number to decimal
 * @b: a binary number as a str
 *
 * Return: converted number, otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int i, num;

if (!b)
return (0);
i = 0;
num = 0;
while (b[i] != '\0')
{
num *= 2;
if (b[i] == '0' || b[i] == '1')
{
num = num + b[i] - '0';
}
else
return (0);
i++;
}
return (num);
}
