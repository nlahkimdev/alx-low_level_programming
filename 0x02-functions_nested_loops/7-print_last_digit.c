#include "main.h"
#include "6-abs.c"

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

	last_digit = _abs(n) % 10;
	_putchar((char) last_digit);
	return (last_digit);
}
