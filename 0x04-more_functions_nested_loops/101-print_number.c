#include "main.h"

/**
 * print_number - check the code
 *
 * @n: a given number
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	int mil;
	int cent;
	int tens;
	int last_digit;

	if (n / 1000 > 1)
		mil = n / 1000;
	if (n / 100 > 1)
		cent = n / 100;
	if (n / 10 > 1)
		tens = n / 10;
	last_digit = n % 10;
		_putchar(mil + '0');
	_putchar(cent + '0');
	_putchar(tens + '0');
	_putchar(last_digit + '0');
	_putchar('\n');
}
