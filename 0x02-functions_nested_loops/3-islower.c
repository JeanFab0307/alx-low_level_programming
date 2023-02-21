#include <ctype.h>
#include "main.h"

/**
 *_islower - determine if a character is lowercase
 *@c: the letter checked
 *
 *Return: 1 if the letter is lowercase. 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
