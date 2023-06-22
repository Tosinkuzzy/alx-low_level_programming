#include "function_pointers.h"

/**
 * print_name - Entry
 * des: Print a name
 * @name: print name
 * @f: A function that takes a character pointer argument and return void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
