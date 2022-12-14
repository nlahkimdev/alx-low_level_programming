#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: a countdown from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int minutes;
	int hours;
	int m;

	for (m = 0; m < 1440; m++)
	{
		minutes = m;
		if (minutes < 9)
		{
			minutes = _putchar('0' + minutes);
		}
		if (minutes > 59)
		{
			minutes = _putchar('0' + '0');

			hours++;
		}
		_putchar(hours);
		_putchar(':');
		_putchar(minutes);
	}
}
