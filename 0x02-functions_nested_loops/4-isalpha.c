#include <ctype.h>
#include "main.h"

/**
 *_isalpha - determine if a character is it is a letter
 *@c: the char checked
 *
 *Return: 1 if char is a letter. 0 otherwise
 */

int _isalpha(int c)
{
	if (islower(c) || isupper(c))
		return (1);
	else
		return (0);
}
