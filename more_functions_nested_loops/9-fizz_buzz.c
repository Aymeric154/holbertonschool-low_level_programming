#include <stdio.h>

/**
 * main - Write a program that prints the numbers from 1 to 100
 *
 * Return: alway zero
 */

int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number / 3 && number / 5)
		{
			printf("FizzBuzz");
		}
		if (number / 3)
		{
			printf("Fizz");
		}
		if (number / 5)
		{
			printf("Buzz");
		}
		return (0);
	}
}
