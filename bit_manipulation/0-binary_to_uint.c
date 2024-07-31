#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 *  to an unsigned int
 *
 *  @b:
 *
 *  Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int j;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != 0)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		j <<= 1;
		j += b[i] - '0';
		i++;
	}

	return (j);
}
