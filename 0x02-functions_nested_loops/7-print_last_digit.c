#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n:  a given number
 *
 * Return: the last digit of a number
 *
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n  % 10;
	if (n < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
