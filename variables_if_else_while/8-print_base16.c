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
	for (m = 97; m < 102; m++)
	{
		putchar(61 + m);
	}

	putchar('\n');
	return (0);
}
