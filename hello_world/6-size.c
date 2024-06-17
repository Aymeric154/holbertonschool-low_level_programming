#include <stdio.h>

/**
 * main - Write a C program that prints the size of various types
 *
 * Return: alway 0
 */

int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of long long int: %zu bytes\n", sizeof(longlongintType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));

	return (0);

}

