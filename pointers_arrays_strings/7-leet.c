#include "main.h"

/**
 * *leet - function that encodes a string into 1337.
 *
 * @s: string to encode
 *
 * Return: s
 */

char *leet(char *s)
{
	int i = 0;
	int j;
	char *ch = "aAeEoOtTlL";
	char *number = "4433007711";

	while (s[i] != 0)
	{
		j = 0;

		while (j < 10)
		{
			if (s[i] == ch[j])
			{
				s[i] = number[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
