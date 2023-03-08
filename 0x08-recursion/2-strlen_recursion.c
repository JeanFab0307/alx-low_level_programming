#include "main.h"
/**
 * _strlen_recursion - give the lenght of a string
 * @s: the string
 *
 *Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (!(*(s)))
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
