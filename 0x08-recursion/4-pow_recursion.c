#include "main.h"
/**
 * pow_recursion - print the value of x^y
 * @x: the int raised tp the power
 * @y: the power
 * Return: x raised tp the powwer of y or -1 if x is negative
 */
int pow_recursion(int x, int y)
{
	if (x < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * pow_recursion(x, y - 1));
}
