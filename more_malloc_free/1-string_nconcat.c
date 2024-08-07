#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat -  function that concatenates two strings.
 *
 * @s1: string one
 * @s2: string two
 * @n: unsigned integer
 *
 * Return: s3
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != 0)
	{
		len1++;
	}
	while (s2[len2] != 0 && len2 < n)
	{
		len2++;
	}

	s3 = malloc(sizeof(char) * (len1 + n + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		s3[i] = s2[j];
	}

	s3[i] = '\0';

	return (s3);
}
