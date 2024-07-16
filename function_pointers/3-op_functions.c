#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - function which adds
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: the sum of a and b
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - functionn which subtracts
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function which multiplies
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function which divide
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function function that gives the remainder of a division
 *
 * @a: number 1
 * @b: number 2
 *
 * Return:  the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
