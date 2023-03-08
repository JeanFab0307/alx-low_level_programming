#include "main.h"
/**
 * _pow_recursion - print the value of x^y
 * @x: the int raised tp the power
 * @y: the power
 * Return: x raised tp the powwer of y or -1 if x is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
