#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase
 *
 * Return: alway 0.
 */

void print_alphabet()
{
	char c;

	for(c = "a"; c <= "z"; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

}
