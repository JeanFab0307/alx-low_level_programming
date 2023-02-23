#include "main.h"
#include <ctype.h>

/**
 * _isdigit - identify uppercase character
 * @c: character
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
