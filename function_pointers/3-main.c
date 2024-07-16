#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - program that performs simple operations
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char op = argv[2];

	int (*operator)(int, int) = get_op_func(op);


	if (!operator)
	{
		printf("Error\n");
		exit (99);
	}

	if (op != "/" || op != "%" && b == 0)
	{
		printf("Error\n");
		exit (100);
	}

	result = operator(a, b);

	printf("%d\n")


}
