#include "main.h"
/**
 * times_table - indicative of times table of variable
 * Description: print times tables of 0-9
 * Return: void
 */
void times_table(void)
{
	int number;
	int multiplier;
	int product;

	for (number = 0; number <= 9; number++)
	{
		_putchar(number + 48);
		for (multiplier = 1; multiplier <= 9; multiplier++)
		{
			_putchar(',');
			_putchar(' ');
			product = number * multiplier;
			for (product < 10)
			{
				_putchar(product % 10);
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
