#include <stdio.h>

/**
 * main -  program that prints the alphabet in lowercase,
 * and then in uppercase
 *
 * Return: 0
 *
 */

int main(void)
{
	char alpb;

	for (alpb = 'a' ; alpb <= 'b' ; alpb++)
	{
		putchar(alpb);
	}

	for (alpb = 'A' ; alpb <= 'B' ; alpb++)
	{
		putchar(alpb);
	}

	putchar('\n');

	return (0);
}
