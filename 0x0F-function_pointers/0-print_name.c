#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: Person's name
 * @f: input pointer function and execute it
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
