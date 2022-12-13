#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int myString[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(myString[i]);
	}
	_putchar('\n');
	return (0);
}
