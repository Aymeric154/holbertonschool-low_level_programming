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

	for (n = 0; n < 10 && 61 <= n <= 66 ; n++)
	{
		putchar('0' + n);
		putchar("61" + n);
	}

	putchar('\n');
	return (0);
}
