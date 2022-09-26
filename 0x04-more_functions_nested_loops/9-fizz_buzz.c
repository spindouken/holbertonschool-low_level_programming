#include "main.h"
/**
 * Description: famous fizz buzz
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
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else if (x % 3 == 0)
		{
			print("Fizz");
		}
		else
		{
			printf( %d, x);
		}
		x++;
	}
}
