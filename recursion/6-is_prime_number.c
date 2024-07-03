#include "main.h"

int check_prime(int n, int i);
/**
 * is_prime_number -  function that returns 1 
 * if the input integer is a prime number, 
 * otherwise return 0.
 *
 * @n:
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return check_prime (n, 2);
}

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

    return check_prime(n, i + 1);
}
