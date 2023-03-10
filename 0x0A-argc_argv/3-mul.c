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
	int a;
	int b;

	if (argc == 3)
	{
		a = argv[1] - '0';
		b = argv[2] - '0';
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
