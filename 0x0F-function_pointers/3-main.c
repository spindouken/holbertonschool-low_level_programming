#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print result of functions post operation interaction
 * @argc: num of args
 * @argv: array of pointers to args
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	char *operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (*operator != '+' && *operator != '-' && *operator != '*'
	&& *operator != '/' && *operator != '%' && argv[2] != 1)
	{
		  printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' || *operator == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])((atoi(argv[1])), (atoi(argv[3]))));

	return (0);
}
