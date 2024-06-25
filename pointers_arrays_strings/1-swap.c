#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: name of the variable
 * @b: name of the variable
 *
 * return: 0
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;

	*b = i;
}
