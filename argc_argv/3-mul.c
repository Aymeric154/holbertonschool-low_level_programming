#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for my program
 * @argc: This is the number of arguments
 * @argv: This is the array of arguments
 *
 * Return: 0 if two nulber , 1 If the program does not receive two arguments
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);
	return (0);


}
