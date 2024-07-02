#include "main.h"

/**
 * _pow_recursion - function that returns
 * the value of x raised to the power of y
 *
 * @x: number to raised
 * @y: power to raise the base
 *
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));

}
