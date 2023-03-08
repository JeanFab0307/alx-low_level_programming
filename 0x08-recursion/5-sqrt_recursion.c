#include "main.h"
int test_squared(int n, int i);
/**
 * _sqrt_recursion - return the natural squre roo of a number
 * @n: the number
 *
 * Return: the natural square root of n . -1 if any
 */
int _sqrt_recursion(int n)
{
	int j;

	if (n < 0)
		return (-1);
	j = test_squared(n, 1);
	if (j * j == n)
		return (j);
	else
		return (-1);
}
/**
 * test_squared - try the power of 2 of numbers until a goal
 * @n: the number to reach
 * @i: the number processed
 *
 * Return: the power of two of n
 */
int test_squared(int n, int i)
{
	if (i * i >= n)
		return (1);
	return (1 + test_squared(n, (i + 1)));
}
