#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selcts corrct functn to perform
 *               the operatn askd by user.
 * @s: The operator passed as arg
 *
 * Return: A pointer to functn corresponding
 *         to the operator gvn as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
