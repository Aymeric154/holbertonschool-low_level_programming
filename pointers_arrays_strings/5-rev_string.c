#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * Return: 0
 */

void rev_string(char *s)
{
        char * a = s;

        while ( *a != 0)
        {
                a++;
        }

        while ( a >= s)
        {
                a--;
                _putchar(*a);
        }
        _putchar('\n');
}
