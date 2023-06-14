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
	int i1, i2, max;
	char *s;

	i1 = i2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i1] != '\0')
		i1++;
	while (s2[i2] != '\0')
		i2++;
	max = i1 + i2;

	s = malloc(sizeof(char) * (max + 1));
	if (s == NULL)
		return (NULL);

	i1 = i2 = 0;
	while (s1[i1] != '\0')
	{
		s[i1] = s1[i1];
		i1++;
	}

	while (s2[i2] != '\0')
	{
		s[i1] = s2[i2];
		i1++;
		i2++;
	}
	s[i1] = '\0';

	return (s);

}
