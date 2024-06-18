#include <stdio.h>

/**
 *  main - program that prints the alphabet in lowercase
 *
 *  Return: 0
 *
 */

int main(void)
{
	int apbt;

	for (apbt = 'a' ; apbt<= 'z'; apbt++)
	{
		putchar(apbt);
		putchar('\n');
	}

	return (0);
}
