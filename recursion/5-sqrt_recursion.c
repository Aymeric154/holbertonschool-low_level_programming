#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n:
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{

	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i * i > n)
		{
			return (-1);
		}

		if (i * i == n)
		{
			return (i);
		}
	}
	return (n + i);



}
