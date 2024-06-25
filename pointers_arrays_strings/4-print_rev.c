#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: is a pointer
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int i;

	for (i = 62; s[i] != 0 ; i--)
	{
		_putchar(s[i]);

	}
	
	_putchar('\n');
}
