#include <stdio.h>

/**
 * _atoi - conv string to int
 * @s: input string
 * Return: int converted
 */

int _atoi(char *s)
{
	int x = 0;
	int sign = -1;
	int flag = 0;
	int conv = 0;

	while (*(s + x) != '\0')
	{
		if (*(s + x) == '-')
		{
			sign *= -1;
		}
		else if (*(s + x) >= '0' && *(s + x) <= '9')
		{
			conv *= 10;
			conv -= (*(s + x) - 48);
			flag = 1;
		}
		else if (flag == 1)
		{
			break;
		}
		x++;
	}
	conv = (conv * sign);
	return (conv);
}

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

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	product = x * y;

	printf("%d\n", product);

	return (0);
}
