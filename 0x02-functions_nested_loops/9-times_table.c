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
		_putchar("0");
		_putchar(',');
		_putchar(' ');
		for (multiplier = 1; multiplier <= 9; multiplier++)
		{
			product = number * multiplier;
			if (product <= 9)
			{
				_putchar(' ');
			}
			else
			{
			_putchar((product / 10) + 48);
			}
			_putchar((product % 10) + 48);
			if (multiplier < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
