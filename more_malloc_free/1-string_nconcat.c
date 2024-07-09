#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat -  function that concatenates two strings.
 *
 * @s1: string one
 * @s2: string two
 * @n: unsigned integer
 *
 * Return: 
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";


	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}

	if (n >= len2)
	{
		s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	}

	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
	{
		s3[i] = s2[j];
	}

	s3[i] = 0;
	return (s3);
}
