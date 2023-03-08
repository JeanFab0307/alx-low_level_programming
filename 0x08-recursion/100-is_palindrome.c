#include "main.h"
int _strlen_recursion(char *s);
int cmp(char *s, int i, int len);
/**
 * is_palindrome - tell a palindrome
 *@s: the string
 *
 *Return: 1 if s is a palindrome, 0 othewise
 */
int is_palindrome(char *s)
{
	int len;
	int comp;

	len = _strlen_recursion(s);
	comp = cmp(s, 0, len);
	return (comp);
}
/**
 * _strlen_recursion - give the lenght of a string
 * @s: the string
 *
 *Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*(s))
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
/**
 * cmp - compare the first and last char of a string
 * @s: the string
 * @i: the nu; of the char compared
 * @len: le lenght of the sring
 *
 *Return: 1 if matches, else 0
 */
int cmp(char *s, int i, int len)
{
	if (i >= len)
		return (1);
	else if (s[i] == s[len])
		return (1);
	else
		return (0);
}
