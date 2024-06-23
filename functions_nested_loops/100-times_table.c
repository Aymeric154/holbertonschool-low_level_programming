#include <stdio.h>

/**
 * print_times_table -  function that prints the n times table
 *
 * Return: alway zero
 */

void print_times_table(int n)
{
	int m1, m2;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (m1 = 0; m1 <= n; m1++)
	{ 
		for (m2 = 0; m2 <= n; m2++)
		{
			printf("%d, ", m1 * m2);
		}
	}
	printf("\n");
}
