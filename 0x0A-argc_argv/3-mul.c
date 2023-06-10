#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if calculated correctly, otherwise 1
 */

int main(int argc, char *argv[])
{
	int mul, a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
