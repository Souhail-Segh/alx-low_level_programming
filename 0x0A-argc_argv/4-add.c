#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate the sum of arguments (integers)
 * @argc: number of args
 * @argv: the args
 * Return: 0 if the sum is correctly calculated, otherwise 1
 */

int main(int argc, char *argv[])
{
	int sum = 0, a, i, j;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			a = atoi(argv[i]);
			sum += a;
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
