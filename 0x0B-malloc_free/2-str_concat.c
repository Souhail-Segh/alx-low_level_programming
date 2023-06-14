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

	i1 = i2 = 0;
	l1 = l2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	max = l1 + l2;

	if (max == 0)
		return (NULL);
	s = malloc(sizeof(char) * (max + 1));
	if (s == NULL)
		return (NULL);

	while (i1 < l1 + 1)
	{
		s[i1] = s1[i1];
		i1++;
	}

	if (i1 != 0)
		i1--;

	while (i2 < l2 + 1)
	{
		s[i1 + i2] = s2[i2];
		i2++;
	}
	s[max] = '\0';
	return (s);
}
