#include <stdio.h>

/**
 * main - have program print its own name even if changed
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc)

	printf("%s\n", argv[0]);
	return (0);
}
