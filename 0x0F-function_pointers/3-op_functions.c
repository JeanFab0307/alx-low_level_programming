#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - add two numbers
 * @a: the first int
 * @b: the second int
 *
 *Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: the first int
 * @b: the second int
 *
 *Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: the first int
 * @b: the second int
 *
 *Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: the first int
 * @b: the second int
 *
 *Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - search the remainder of the division two numbers
 * @a: the first int
 * @b: the second int
 *
 *Return:thr remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
