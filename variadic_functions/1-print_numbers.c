#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 *
 * @separator: is the string to be printed between numbers
 * @n:  is the number of integers
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
