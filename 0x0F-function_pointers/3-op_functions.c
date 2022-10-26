#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - get sum of integers
 * @a: first int
 * @b: second int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - get difference of integers
 * @a: first int
 * @b: second int
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply integers
 * @a: first int
 * @b: second int
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide integers
 * @a: first int
 * @b: second int
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus of one int by another int
 * @a: first int
 * @b: second int
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
