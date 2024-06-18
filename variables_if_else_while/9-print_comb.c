#include <stdio.h>

/**
 * main - program that prints all possible combinations
 * of single-digit numbers
 *
 * Return: alway zero
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
		putchar(', ');
	}

	putchar('\n');
	return (0);
}
