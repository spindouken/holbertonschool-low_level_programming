#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
