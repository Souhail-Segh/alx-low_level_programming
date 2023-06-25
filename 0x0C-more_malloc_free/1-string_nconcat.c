#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concatenate 1st string with n of 2nd one
 * @s1: first string
 * @s2: second string
 * @n: number of char to take from s2
 * Return: a string, else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int cnt = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	while (s1[i] != '\0')
		i++;

	if (s2 == NULL)
		s2 = "";
	while (s2[j] != '\0')
		j++;

	if (j > n && n > 0)
		j = n - 1;

	s = malloc(i + j + 1);
	if (s == NULL)
		return (NULL);

	while (cnt <= i)
	{
		s[cnt] = s1[cnt];
		cnt++;
	}

	cnt = 0;
	while (cnt <= j)
	{
		s[cnt + i] = s2[cnt];
		cnt++;
	}

	s[i + cnt] = '\0';
	return (s);
}
