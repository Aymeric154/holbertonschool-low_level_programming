#include "main.h"

int check_prime(int n, int i);
/**
 * is_prime_number -  function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0.
 *
 * @n: prime number
 *
 * Return: 1 if is a prime number, 0 if otherwise
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - function to check a prime
 *
 * @n: prime number
 * @i: divisor
 *
 * Return: 1 if is a prime number, 0 if otherwise
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}

	return (check_prime(n, i + 1));
}
