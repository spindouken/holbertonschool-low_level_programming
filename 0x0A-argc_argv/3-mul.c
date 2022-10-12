#include <stdio.h>

/**
 * main - print result of multiplication
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int product, x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	product = x * y;

	printf("%d\n", product);

	return (0);
}