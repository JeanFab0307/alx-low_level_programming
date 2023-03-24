#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: a string to separate each number
 * @n: the number of string printed
 *
 *Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *buffer;
	va_list ap;

	if (n <= 0)
	{
	}
	else
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			buffer = va_arg(ap, char*);
			if (separator == NULL || i == 0)
				printf("%s", "");
			else
				printf("%s", separator);
			if (buffer == NULL)
				buffer = "(nil)";
			printf("%s", buffer);
		}
		va_end(ap);
	}
	printf("\n");
}
