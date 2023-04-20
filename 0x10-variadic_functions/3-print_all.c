#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything following the given format
 * @format: a string for the format of the parameter given
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;
	char *buffer;

	va_start(arg, format);
	while (format[i])
	{
		if (i && (format[i - 1] == 'c' || format[i - 1] == 'i'
			  || format[i - 1] == 'f' || format[i - 1] == 's'))
			printf(", ");
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arg, int));
			break;
		case 'i':
			printf("%d", va_arg(arg, int));
			break;
		case 'f':
			printf("%f", va_arg(arg, double));
			break;
		case 's':
			buffer = va_arg(arg, char *);
			if (!buffer)
				buffer = "(nil)";
			printf("%s", buffer);
			break;
		default:
			break;
		}
		i++;
	}
	va_end(arg);
	putchar('\n');
}
