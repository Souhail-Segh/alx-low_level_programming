#include "main.h"
#include <stdio.h>

int length_calculator(char *s);
int check_palindrome(char *s, int i, int j);

/**
 * is_palindrome - check if a string is a palindrome
 * @s: the string
 * Return: if palindrome 1, else 0
 */

int is_palindrome(char *s)
{
	int length, result;

	length = length_calculator(s);
	/* printf("\n len: %d \n", length - 1); */
	if (length <= 1)
		return (1);
	result = check_palindrome(s, 0, length - 1);
	return (result);
}

/**
 * length_calculator - gives the length of a string
 * @s: the string
 * Return: the length of a string
 */

int length_calculator(char *s)
{
	int length = 0;

	if (s[length] == '\0')
	{
		return (0);
	}
	length = length_calculator(&s[1]) + 1;
	return (length);
}

/**
* check_palindrome - check if a string is a palindrome
* @s: the string
* @i: first index
* @j: last index
* Return: if palindrome 1, else 0
*/

int check_palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] == s[j])
		return (check_palindrome(s, i + 1, j - 1));
	else
		return (0);
}
