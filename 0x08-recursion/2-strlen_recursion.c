#include "main.h"

/**
 * _strlen_recursion - printing a string
 * @s: The string that must be returned
 * Return: None
 */

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
	{
		return (0);
	}
	i = _strlen_recursion(&s[1]) + 1;
	return (i);
}
