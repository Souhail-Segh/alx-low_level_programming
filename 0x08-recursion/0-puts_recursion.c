#include "main.h"

/**
 * puts_recursion - printing a string
 * @s: The string that must be returned
 * Return: None
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		return;

	_putchar(s[0]);
	return (_puts_recursion(&s[1]));
}
