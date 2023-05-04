#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index of a number
 * @n: a pointer to a int of the number
 * @index: the given index
 *
 * Return: 1 if it worked
 * Or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp = 1;

	if (index > 31)
		return (-1);
	tmp = tmp << index;
	tmp = ~tmp;
	tmp = tmp & *n;
	*n = tmp;
	return (1);
}
