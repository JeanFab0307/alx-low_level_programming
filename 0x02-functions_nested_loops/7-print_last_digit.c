#include "main.h"

/**
 *print_last_digit - print last digit of a number
 *@n: number
 *
 *Return: The last digit of the number
 */
int _abs(int n)
{
	n = n % 10;
	if (n < 0)
		return (-n);
	else
		return (n);
}
