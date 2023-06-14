#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int calcul_len(char *s);

/**
 * str_concat - concatenate two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: a pointer if succed, NULL if not
 */

char *str_concat(char *s1, char *s2)
{
	int i1, i2, l1, l2, max;
	char *s;

	i1 = 0;
	i2 = 0;
	l1 = calcul_len(s1);
	l2 = calcul_len(s2);
	max = l1 + l2;

	if (max == 0)
		return (NULL);
	s = malloc(sizeof(char) * (max + 1));
	if (s == NULL)
		return (NULL);

	while (i1 <= l1 - 1)
	{
		s[i1] = s1[i1];
		i1++;
	}

	while (i2 <= l2)
	{
		s[i1 + i2] = s2[i2];
		i2++;
	}
	s[max] = '\0';
	return (s);
}

/**
 * calcul_len - length of a string
 * @s: string
 * Return: the length of a string
 */

int calcul_len(char *s)
{
	int l;

	l = 0;
	if (s == NULL)
	{
		l = 0;
	}
	else
	{
		while (s[l] != '\0')
			l++;
	}
	return (l);
}
