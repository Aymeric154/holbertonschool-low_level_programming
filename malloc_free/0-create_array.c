#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @c: the character with which to initialize the array
 * @size: the size of array
 *
 * Return: Null
 */

char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}


	i = malloc(sizeof(char) * size);

	if (i == 0)
	{
		return (NULL);
	}

	for (j = 0; j < size; j++)
	{
		i[j] = c;
	}

	return (i);


}
