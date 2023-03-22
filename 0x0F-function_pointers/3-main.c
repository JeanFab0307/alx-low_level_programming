#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - perform operations depending on the arg
 *@argc: the number of arg on the command
 *@argv: an array which contains the arguments on the command
 *
 *Return: 0 on success, 98 if number of arg is wrong
 * 99 if not the good operator
 * 100 if divide or modulo 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int res;
	char *op;

	res = 0;
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	op = argv[2];
	if ((op[0] != '+') ||
		 (op[0] != '-') ||
		 (op[0] != '*') ||
		 (op[0] != '/') ||
		 (op[0] != '%'))
	{
		printf("Error\n");
		return (99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (b == 0 && (op[0] == '/' || op[0] == '%'))
	{
		printf("Error\n");
		return (100);
	}
	res = (*get_op_func(op))(a, b);
	printf("%d\n", res);
	return (0);
}
