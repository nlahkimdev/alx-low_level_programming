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
	int i;
	int res;

	if (n < 0)
	{
		i  = n * -1;
		res = i % 10;
		_putchar(res);
		return (i % 10);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		res = n % 10;
		_putchar(res);
		return (n % 10);
	}
	return (0);
}
