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
	int i = 0;
	int j;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			j = i / 2;
		}
		else
		{
			j = (i + 10) / 2;
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
