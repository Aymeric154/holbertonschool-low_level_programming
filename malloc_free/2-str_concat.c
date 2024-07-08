#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Write a function that concatenates two strings.
 *
 * @s1: 
 * @s2:
 *
 * Return: 
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int len1 = 0, len2 = 0, i, j;

	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}

	a = malloc(sizeof(char) * (len1 + len2 + 1));

	if (a == 0)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		a[i] = s1[i];
	}

	for (j = 0; j < len2; j++, i++)
	{
		a[j] = s2[j];
	}


	return (a);

}
