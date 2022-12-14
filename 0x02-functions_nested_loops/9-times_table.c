#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int h, v, p;

	for (v = 0; v < 10; v++)
	{
		_putchar('0');
		for (h = 1; h < 10; h++)
		{
		_putchar(',');
		_putchar(' ');
		p = h * v;
		if (p < 10)
			_putchar(' ');
		else
			_putchar((p / 10) + '0');
		_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
