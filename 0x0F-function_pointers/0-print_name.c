#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name- prints a name
 * @name: name printed
 * @f: pointer for the function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}


