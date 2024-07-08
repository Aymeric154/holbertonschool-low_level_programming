#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - nction that returns a pointer to
 * a newly allocated space in memory
 *
 * @str: string to duplicate
 *
 * Return: i
 */

char *_strdup(char *str)
{
	char *i;
	unsigned int j = 0;

	if (str == 0)
	{
		return (NULL);
	}

	while (str[j] != 0)
	{
		j++;
	}

	i = malloc(sizeof(char) * (j + 1));

	if (i == 0)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	{
		i[j] = str[j];
	}

	return (i);
}
