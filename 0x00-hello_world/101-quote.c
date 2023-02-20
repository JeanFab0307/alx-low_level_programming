#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 *main - Entry point
 *
 *Return: 1
 */

int main (void)
{
	char *mess[64];

	*mess = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2 , *mess , strlen(mess));
	return (1);
}
