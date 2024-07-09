#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - function that allocates memory for an array
 * using malloc.
 *
 * @nmemb: number of elements in array
 * @size: size of each element
 *
 * Return: i
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	a = ptr;

	for (i = 0; i < nmemb * size ; i++)
	{
		a[i] = 0;
	}


	return (ptr);
}
