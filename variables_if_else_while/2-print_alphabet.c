#include <stdio.h>

/**
 *  main - program that prints the alphabet in lowercase
 *
 *  Return: 0
 *
 */

int main(void)
{

	char start = "a";
	char end = "z";

	char alphabet = start;

	while (start != end)
	{
		putchar (start);
		start++;
	}

	return (0);
}
