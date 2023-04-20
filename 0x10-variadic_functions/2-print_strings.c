#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings with a specified separator
 * @separator: the string to print between numbers
 * @n: the number of string to print
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	char *buffer;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(arg, n);
		while (i < n)
		{
			if (i && separator)
				printf("%s", separator);
			buffer = va_arg(arg, char *);
			if (!buffer)
				buffer = "(nil)";
			printf("%s", buffer);
			i++;
		}
		va_end(arg);
	}
	printf("\n");
}
