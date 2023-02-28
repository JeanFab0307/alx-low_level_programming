#include "main.h"
/**
 *swap_int - swap the value of two int
 *@a: the first int
 *@b: the second int
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
