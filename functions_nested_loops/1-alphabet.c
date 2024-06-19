#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase
 *
 * Return: alway 0.
 */

int main(void)
{
	char c = 'a'

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');

	return (0);

}
