#include "main.h"

/**
 * _print_rev_recursion - printing a string in reverse
 * @s: The string that must be returned
 * Return: None
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(&s[1]);
	_putchar(s[0]);
}
