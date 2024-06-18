#include <stdio.h>

/**
 * main -  program that prints all
 * the numbers of base 16 in lowercase
 *
 * Return: always zero
 */

int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		putchar('0' + n);
	}

	putchar('\n');
	return (0);
}
