#include <stdio.h>
/**
 * main - print the name of the program
 * @argc: the number of arg
 * @argv: an array with the arguments
 *
 *Return: always 0
 */
int main(int argc , char *argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
