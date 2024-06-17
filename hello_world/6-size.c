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

	printf("Size of int: %d bytes\n", sizeof(intType));
	printf("Size of float: %d bytes\n", sizeof(floatType));
	printf("Size of double: %d bytes\n", sizeof(doubleType));
	printf("Size of char: %d bytes\n", sizeof(charType));

	return (0);

}

