#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the name of the program
 * @argc: the number of arg
 * @argv: an array with the arguments
 *
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; i != 0; j++)
	{
		if (i >= 25)
			i = i - 25;
		else if (i >= 10)
			i = i - 10;
		else if (i >= 5)
			i = i - 5;
		else if (i >= 2)
			i = i - 2;
		else if (i == 1)
			i = i - 1;
	}
	printf("%d\n", j - 1);
	return (0);
}
