#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a given name in a specified format
 * @name: the name to print
 * @f: a pointer to a function of teh desired format
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(cahr *))
{
	if (f != NULL)
		f(name);
}
