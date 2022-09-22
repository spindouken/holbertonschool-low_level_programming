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
		for (multiplier = 0; multiplier <= 9; multiplier++)
		{
			_putchar(',');
			_putchar(' ');
			product = (number * multiplier);
			if (product < 9)
			{
				_putchar(' ');
				_putchar((product % 10) + 48);
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
