#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 *  in lowercase
 *
 *  Return: we don't use return
 */

void print_alphabet_x10(void)
{
	char c;
	char t = 0;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if ( t < 10)
		{
		_putchar(c);

		}
	}

	_putchar('\n');

}