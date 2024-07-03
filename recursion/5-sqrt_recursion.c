#include "main.h"

int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n:i number to calculate the square root
 *
 * Return: result of square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - recurses to find the natural
 * square root of a number
 *
 *@i: our current guess
 *@n: number to calculate square root
 *
 * Return: result of square root
 */

int sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_helper(n, i + 1));
}

