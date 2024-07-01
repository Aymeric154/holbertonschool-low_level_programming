#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: initial segment
 * @accept: string with contains character
 *
 * Return: n
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned int n = 0;
    int i, j;
    int k;

    for (i = 0; s[i] != '\0'; i++)
    {
        k = 0;
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                k = 1;
                break;
            }
        }
        if (k == 0)
            break;
        n++;
    }
    return (n);
}
