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
 * main - find sum
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no errors, elsewise return 1
 */

int main(int argc, char *argv[])
{
	int x, y, sum;

	for (x = 1; x < argc; x++)
	{
		sum += _atoi(argv[x]);
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	printf("%d\n", sum);

	return (0);
}
