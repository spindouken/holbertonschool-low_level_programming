#include "main.h"
#include <stdio.h>
/**
 * main - famous fizz buzz
 *
 *
 * Return: x value, fizz, buzz, or fizzbuzz
 */
int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if (x % 5 == 0 && x % 3 == 0)
		{
			printf("FizzBuzz");
		}
		if (x % 5 == 0)
		{
			printf("Buzz");
		}
		if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf(" ");
		}
		x++;
	}
	printf("\n");
}
