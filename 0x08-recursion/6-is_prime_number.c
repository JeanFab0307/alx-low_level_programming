#include "main.h"
int test_prime(int n, int i);
/**
 * is_prime_number - tells if a number is prime or not
 * @n: the number
 *
 * Return: 1 if 0 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int j;

	if (n <= 1)
		return (0);
	j = test_prime(n, 1);
	if (j == n)
		return (1);
	else
		return (0);
}
/**
 * test_prime - try the power of 2 of numbers until a goal
 * @n: the number to reach
 * @i: the number processed
 *
 * Return: the power of two of n
 */
int test_prime(int n, int i)
{
	if (n % i == 0)
		return (1);
	return (1 + test_prime(n, (i + 1)));
}
