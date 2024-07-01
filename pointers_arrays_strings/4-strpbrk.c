#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s:
 * @accept:
 *
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

		if (s[i] == 0 || accept[j] == 0)
		{
			return (0);
		}
		for (i = 0; s[i] != 0; i++)
		{
			for (j = 0; accept[j] != 0; j++)
			{
				if (s[i] == accept[j])
				{
					return (s + i);
				}
			}
		}
		return (0);

}

