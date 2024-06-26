#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: is string
 * @src: is string
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != 0)
	{
		i++;
	}

	while (src[j] != 0)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);

}
