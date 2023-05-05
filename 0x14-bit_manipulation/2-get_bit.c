#include "main.h"

/**
 * get_bit - get a bit value of a number at a given index
 * @n: the number
 * @index: the index of the bit to get, starting from 0
 *
 * Return: the value of the bit at the index
 * Or  -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
		return (-1);
	else
		return ((n >> index) & 1);
}
