#include "main.h"

/**
 * puts_half - a function that prints half of a string
 *
 * @str: is character
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (i / 2 && i >= 5)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
