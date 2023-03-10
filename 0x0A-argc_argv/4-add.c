#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	int a;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		j = 0;
		while (*argv[j] != '\0')
		{
			if (isdigit(argv[j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		a = atoi(argv[i]);
		if (a >= 0)
		{
			sum = sum + a;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
