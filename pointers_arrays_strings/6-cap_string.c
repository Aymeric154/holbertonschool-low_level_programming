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
	int i = 0, j = 0;

	while (s[i] != 0)
	{
		if ((j % 2 == 1) && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		else if (s[i] == ' ')
		{
			j++;
		}
		i++;
		
	}
	return (0);
}
