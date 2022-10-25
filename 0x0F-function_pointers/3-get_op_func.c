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
	
}