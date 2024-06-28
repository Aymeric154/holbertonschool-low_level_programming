#include "main.h"

/**
 * *_strncpy - function that copies a string.
 *
 * @dest: destination string
 * @src: source string
 * @n: number in byte
 *
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	
	int i = 0;

	for(i = 0; dest[i] != 0; i++)
	{
		if (i < n)
		{
		dest[i] = src[i];
		}
		else
		{
		}

	}
	return (dest);
}
