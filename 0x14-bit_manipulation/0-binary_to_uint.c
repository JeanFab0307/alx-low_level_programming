#include "main.h"

/**
 * binary_to_uint - convert a binary number in an array to an unsigned int
 * @b: the array countaining the binary number
 *
 * Return: the unsigned int value of the binary b
 * Or 0 if: b NULL or contains something that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, pow2 = 1, len = 0, result = 0;

	if (!b)
		return(0);

	while(b[len])
		len++;

	while(i < len)
	{
		if (b[len - 1 - i] != '0' && b[len - 1 - i] != '1')
			return (0);
		result += (b[len - 1 - i] - '0') * pow2;
		i++;
		pow2 *= 2;
	}
	return (result);
}
