#include "main.h"
/**
 * jack_bauer - print every minute and hour of the day (clock form)
 * Description: print every minute and hour of the day (clock form)
 * Return: all valid
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((minute / 10) + 48);
			_putchar((minute % 10) + 48);
			_putchar('\n');
		}
	}
}
