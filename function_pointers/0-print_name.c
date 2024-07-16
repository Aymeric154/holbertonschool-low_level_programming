#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - print a name
 * @name: Name to print
 * @f: pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
