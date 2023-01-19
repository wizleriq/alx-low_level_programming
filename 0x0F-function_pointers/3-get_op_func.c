#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - function selects the correct function to perform.
 * @s: operator used.
 *
 * Rrturn: correct function result or NULL if operator is wrong.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", 0p_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
