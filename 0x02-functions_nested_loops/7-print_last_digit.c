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

	if (n < 0)
	{
		i  = n * -1;
		return (i % 10);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (n % 10);
	}
	return (0);
}
