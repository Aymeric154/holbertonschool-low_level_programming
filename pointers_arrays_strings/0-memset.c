#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 *
 * @s: pointer to memory
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);


}
