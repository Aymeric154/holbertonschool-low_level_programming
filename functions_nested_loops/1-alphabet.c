#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase
 *
 * Return: alway 0.
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ;alphabet++)
	{
		_putchar(alphabet);
	
	}

	putchar('\n');

	return (0);

}
