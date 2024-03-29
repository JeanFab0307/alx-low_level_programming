#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - return a pointer to a function of the appropriate operation
 * @s: the operator for the function
 *
 * Return: a pointer to a function following the sign given
 * Or NULL if not an appropriate sign
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
