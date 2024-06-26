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
	int i = 0, n = 0, j = 0;

	for (i = 0; str[i] != 0; i++)
	{
	}
	n = i / 2;
	if ((i % 2) != 0)
	{
		n = (i + 1) / 2;
	}
	for (j = n ; str[j] != 0; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
