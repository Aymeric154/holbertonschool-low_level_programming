#include "main.h"

/**
 * *cap_string -  function that capitalizes all words of a string
 *
 * @s: is a string to capitalize
 *
 * Return: 0
 */

char *cap_string(char *s)
{
	int i = 0, j = 0;
	char n[] = " \t\n,;.!?\"(){}";
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		{
			for (j = 0; j < 13; j++)
			{
				if (s[i] == n[j])
				{
					if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					{
						s[i + 1] -= 32;
					}
				}
			}
		}
	}
	return (s);
}
