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

	for (n = 0; n < 10 ; n++)
	{
		putchar('0' + n);
		if (n < 9)

		{
		putchar(44);
		putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
