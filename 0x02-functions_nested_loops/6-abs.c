#include "main.h"

/**
 *_abs - give the absolute value of a number
 *@n: number
 *Description: if n is negative its value becomes -n.
 *
 *Return: The absolute value of the number
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
