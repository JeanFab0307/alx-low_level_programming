#include "main.h"
/**
 * wildcmp - compare two strings, the char * is a wildcard
 *@s1: the 1st string
 *@s2: the 2nd string
 *
 *Return: 1 if s is s1 and s2 are considered identical, 0 othewise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}
	else if (*(s2 - 1) == '*')
	{
		if (*s2 == '\0' && *s1 == '\0')
			return (1);
		else if (*s1 == '\0')
			return (0);
		if (*s1 != *s2)
			return (wildcmp(s1 + 1, s2));
		else
			return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s1 != *s2)
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
