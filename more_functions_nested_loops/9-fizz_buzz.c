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
			printf("FizzBuzz ");
		}
		else if (number / 3)
		{
			printf("Fizz ");
		}
		else if (number / 5)
		{
			printf("Buzz ");
		}
		else 
		{
			printf("%d ", number
		return (0);
	}
}
