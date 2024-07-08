#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - nction that returns a pointer to a newly allocated space in memory
 *
 * @str:
 *
 * Return:
 */

char *_strdup(char *str)
{
	char *i;
	int j = 0;

	if (str == 0)
	{ 
		return (NULL);
	}
	
	while(str[j] != 0)
	{
		j++;
	}
	
	i = malloc(sizeof(char) * str[j]);
	
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
