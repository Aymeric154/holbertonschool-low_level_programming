#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 *  at a given index.
 *
 *  @n: is an integer
 *  @index: is the index, starting from 0 of the
 *   bit you want to get
 *
 *   Return:  the value of the bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i  = 1;

	if (index > sizeof(n) * 8)
		return (-1);

	i <<= index;

	if (n & i)
		return (1);
	else
		return (0);

}
