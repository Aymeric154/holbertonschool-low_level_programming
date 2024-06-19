#include "main.h"

/**
 * _isalpha -  checks whether a character is an alphabet
 *  (a to z and A-Z) or not.
 *  @c: is character to check
 *
 *  Return: zero
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);

	}

	return (0);

}
