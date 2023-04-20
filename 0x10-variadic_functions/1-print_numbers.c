#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with a specified separator
 * @separtator: the string to print between numbers
 * @n: the number of int to print
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(arg, n);
		while (i < n)
		{
			if (i && separator)
				printf("%s", separator);
			printf("%d", va_arg(arg, int));
			i++;
		}
		va_end(arg);
	}
	printf("\n");
}
