#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum the parameters of the function
 * @n: the number of parameter to sum
 *
 * Return: the sum of the parameters
 * Or 0 if n <= 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	int sum = 0;

	if (n <= 0)
		return (0);
	va_start(list, n);
	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}
	va_end(list);
	return (sum);
}
