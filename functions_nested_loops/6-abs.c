#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *@x: is integer to check
 * Return: zero
 */

int _abs(int x)
{

	if (x == 0)
	{
		return (x);
	}
	else if (x <= 0)
	{
		x = x * -1;
		return (x);
	}
	else
	{
		return (x);
	}
}
