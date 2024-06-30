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
	int j = 0;

	while (*s != 0)
	{
		if (*s == '-')
		{

			n = n * -1;
		}

		else if	(*s >= '0' && *s <= '9')
		{
			j = i;
			i = i * 10 + (*s - '0');

			if (i / 10 != j)
			{

				return (j * n);
			}

		}
		else if (i > 0)
			break;
		s++;
	}
	return (i * n);
}
