#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 *
 * @separator:  is the string to be printed between the strings
 * @n: is the number of strings
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (separator != NULL && i > 0)
		{
			printf("%s", separator);
		}

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
	}

	va_end(args);
	printf("\n");
}
