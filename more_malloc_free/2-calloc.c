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
	int *i = 0;

	i = malloc(sizeof(size) * nmemb);


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (i == NULL)
	{
		return (NULL);
	}



	return (i);

	
}
