#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - retrieve function to perform operation requested by executer
 * @s: operator passed as an argument to the program
 * Return: NULL if s does not match any of the 5 expected operators
 * or return a pointer to the function that corresponds to the operator
 * given as a parameter
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

	int i = 0;
	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
