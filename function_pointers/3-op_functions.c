#include"3-calc.h"
#include<stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * op_add - function which adds
 *
 * @a: first number
 * @b: second number
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
 * @a: first number
 * @b: second number
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
 * @a: first number
 * @b: second number
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
 * @a: first number
 * @b: second number
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
 * @a: first number
 * @b: second number
 *
 * Return:  the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
