#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - make an operation on the terms given as arguments
 * @argc: the number of arguments entered on the command line
 * @argv: an array of strings of the entered arguments
 *
 * Return: 0 on Success
 * 98 if hte number of arg is not right
 * 99 if the operator is not +-*%/
 * 100 if if a division or modulo by 0 is detected
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	char *op;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	if ((b == 0) && (op[0] == '/' || op[0] == '%'))
	{
		printf("Error\n");
		return (100);
	}
	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		return (99);
	}
	result = get_op_func(op)(a, b);
	printf("%d\n", result);
	return (0);
}
