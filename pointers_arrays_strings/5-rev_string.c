#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * Return: 0
 */

void rev_string(char *s)
{
	char a;
	int i, j, h;

	for (j = 0; s[j] != '\0'; j++)
	{
	}

	h = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		a = s[i];
		s[i] = s[h];
		s[h--] = a;
	}
}
