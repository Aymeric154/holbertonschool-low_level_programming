#include <stdio.h>

/**
 * main -  program that prints all
 * the numbers of base 16 in lowercase
 *
 * Return: always zero
 */

int main(void)
{
	char n;
	char m;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}

	putchar('\n');
	return (0);
}
