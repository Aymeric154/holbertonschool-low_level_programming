#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 *
 * @s:
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	int i = 0;
	
	while (s[i] != 0)
	{
		_putchar(s[i]);
		s++;
	}
	_putchar('\n');

}
