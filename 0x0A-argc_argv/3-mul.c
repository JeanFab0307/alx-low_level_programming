#include <stdio.h>
/**
 * main - print the name of the program
 * @argc: the number of arg
 * @argv: an array with the arguments
 *
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (argv[1] - '0') * (argv[2] - '0'));
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
