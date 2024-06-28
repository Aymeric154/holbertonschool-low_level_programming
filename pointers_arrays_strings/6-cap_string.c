#include "main.h"

/**
 * *cap_string -  function that capitalizes all words of a string
 *
 * @s:
 *
 * Return: 0
 */

char *cap_string(char *s)
{
	int i, j;
	char n[] = " \t\n,;.!?\"(){}";


	for (i = 0; s[i] != 0; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; n[j] != 0; j++)
		{
			if (s[i] == n[j])
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 32;
				}
			}
		}
	}
	return (s);

}
