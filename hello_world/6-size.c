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

	printf("Size of int: %u bytes\n", sizeof(intType));
	printf("Size of float: %u bytes\n", sizeof(floatType));
	printf("Size of double: %u bytes\n", sizeof(doubleType));
	printf("Size of char: %u bytes\n", sizeof(charType));

	return (0);

}

