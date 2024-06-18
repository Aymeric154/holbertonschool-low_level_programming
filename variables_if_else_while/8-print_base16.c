#include <stdio.h>

/**
 * main -  program that prints all
 * the numbers of base 16 in lowercase
 *
 * Return: always zero
 */

int main(void)
{
	unsigned char n;
	unsigned char m;
	
	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	for (m = 61; m < 66; m++)
	{
		putchar("61" + m);
	}

	putchar('\n');
	return (0);
}
