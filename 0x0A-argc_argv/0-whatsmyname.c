#include <stdio.h>

/**
 * main - have program print its own name even if changed
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc(void), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
