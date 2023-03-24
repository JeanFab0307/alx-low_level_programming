#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all of its parameter
 * @n: the number of parameter to sum
 *
 *Return: the sum of its parameters or 0 is n== 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	sum = 0;
	if (n <= 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);
	va_end(ap);
	return (sum);
}
