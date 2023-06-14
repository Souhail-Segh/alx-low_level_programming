#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy a string
 * @str: the original string
 * Return: a pointer if succed, NULL if not
 */

char *_strdup(char *str)
{
	int i, l;
	char *s;

	i = 0;
	l = 0;
	if (str == NULL)
	{
		return (NULL);
	}

	while (str[l] != '\0')
	{
		l++;
	}

	s = malloc(l + 1);

	while (i <= l)
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
