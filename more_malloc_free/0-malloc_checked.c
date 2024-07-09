#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Write a function that allocates memory using malloc
 *
 * @b: insigned int type
 *
 * Return: return pointer
 */

void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
