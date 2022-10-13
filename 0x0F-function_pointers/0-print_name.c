#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print a name from a function pointer
 * @name: char string
 * @f: function pointer that takes a string argument
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
