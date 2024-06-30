#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 * @s:
 *
 * Return: 0;
 */

int _atoi(char *s)
{
	int i = 0, n = 1;
	unsigned int j = 0;

	while (s[i] != 0)
	{
		if (s[i] == '-')
		{

			n = n * -1;
		}

		else if	(s[i] >= '0' && s[i] <= '9')
		{
			i = i * 10 + (s[i] - '0');

			if (s[i + 1] < '0' || s[i + 1] > '9')
			{

				break;
			}

		}
		else if (j > 0)
			break;
		s++;
	}
	return (i * n);
}
