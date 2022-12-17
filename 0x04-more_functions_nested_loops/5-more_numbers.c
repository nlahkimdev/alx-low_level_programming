#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		_putchar(i);
	for (i = 48; i < 53; i++)
	{
		_putchar(49);
		_putchar(i);
	}
	_putchar('\n');
}
