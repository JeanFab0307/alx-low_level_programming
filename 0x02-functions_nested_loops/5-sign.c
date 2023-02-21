#include "main.h"

/**
 *print_sign - give a number sign
 *@n: a=Number which gets its sign checked
 *
 *Return: -1 if negative, -1 if positive, 0 if zero
 */

int print_sign(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (1);
	else
		return (0);
}
