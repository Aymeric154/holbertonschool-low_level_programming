#include "main.h"

/**
 * puts2 -  function that prints every other character of a string
 *
 * @str:
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != 0; i++)
	{
	for(j = 0; j % 2; j++)
		{
		_putchar(str[j]);
		}
	}
	_putchar('\n');
}
