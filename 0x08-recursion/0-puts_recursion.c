#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line
 *
 * @s: string to print.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	else
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s);
}
