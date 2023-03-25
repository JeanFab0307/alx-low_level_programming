#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all - prints anything
 * @format: the tyype of argument passed
 *
 *Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i;
	char *buffer;
	va_list ap;

	va_start(ap, format);
	while (format[i] != '\0' && format == NULL)
	{
		if (i != 0)
			printf(", ");
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 's':
			buffer = va_arg(ap, char*);
			if (buffer == NULL)
				buffer = "(nil)";
			printf("%s", buffer);
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		default:
			break;
		}
	i++;
	}
	va_end(ap);
	printf("\n");
}
