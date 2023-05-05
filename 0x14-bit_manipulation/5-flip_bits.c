#include "main.h"

/**
 * flip_bits - counts the number of bit to flib to get fromon number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bit that has to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0, i;

	for (i = 0; n >> i || m >> i; i++)
		flip += (n >> i & 1) ^ (m >> i & 1);
	return (flip);
}
