#include <stdio.h>
#include <stdlib.h>

/**
 * main - money cents change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if everything goes OK, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int num, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	while (num > 0)
	{
		sum += 1;
		if (num >= 25)
		{
			num -= 25;
		}
		else if (num >= 10)
		{
			num -= 10;
		}
		else if (num >= 5)
		{
			num -= 5;
		}
		else if (num >= 2)
		{
			num -= 2;
		}
		else if (num >= 1)
		{
			num -= 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
