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

	for (c = 'a' ; c <= 'z' ; c++)
	{

		if (c < 10)
		{	
			_putchar(c);
		}
	}

	_putchar('\n');

}
