#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if there are symbols, 0 if is number
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
