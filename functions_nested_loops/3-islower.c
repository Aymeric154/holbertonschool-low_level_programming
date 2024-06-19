#include "main.h"

/**
 * main  -  function that checks for lowercase character.
 * @c : is lowercase
 * Return: 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
