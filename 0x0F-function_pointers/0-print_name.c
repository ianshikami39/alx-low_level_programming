#include <stdlib.h>
#include <stdio.h>
#include "function_pointer.h"
/**
 * print_name - print the name
 * @name:its name to be printed
 * @f: function to use
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
