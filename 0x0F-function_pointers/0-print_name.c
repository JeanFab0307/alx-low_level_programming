#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print a name with additional text
 * @name: the name printed
 * @f: a pointer toa function for the display format of name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
}
