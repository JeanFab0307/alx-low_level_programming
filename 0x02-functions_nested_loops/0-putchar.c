#include <unistd.h>

/**
 *main - to print char without std libraries
 *Return: 0
 */

int main(void)
{
	char *a[9];

	*a = "_putchar\n";
	write(1, *a, 9);
	return (0);
}
