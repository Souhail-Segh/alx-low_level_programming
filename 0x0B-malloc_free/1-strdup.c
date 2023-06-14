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
	int i;
	char *s;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}

	s = malloc(sizeof(str));

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';

	return (s);
}
