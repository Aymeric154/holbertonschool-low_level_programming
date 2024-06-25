#include "main.h"

/**
 * strlen - function that returns the length of a string.
 *
 * @s: is a pointer
 * return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}