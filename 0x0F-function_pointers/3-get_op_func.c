#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - picks the right function based on operator
 *
 * @s: the operator
 *
 * Return: pointer to a function to call
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", &op_add},
		{"-", &op_sub},
		{"*", &op_mul},
		{"/", &op_div},
		{"%", &op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
