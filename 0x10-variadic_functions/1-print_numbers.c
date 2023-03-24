#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numers, followed by a new line
 * @separator: a string to separate each number
 * @n: the number of int printed
 *
 *Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n <= 0)
	{
	}
	else
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			if (separator == NULL)
				break;
			if (i == 0)
				i = 0;
			else
				printf("%s", separator);
			printf("%d", va_arg(ap, int));
		}
		va_end(ap);
	}
	printf("\n");
}
