#include "function_pointers.h"

/**
 * print_name- prints a name
 * @name: name printed
 * @f: pointer for the function
 * 
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
