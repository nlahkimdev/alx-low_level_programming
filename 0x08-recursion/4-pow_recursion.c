#include "main.h"

/**
 * _pow_recursion - a function that computes power of an integer
 *
 * @x: int - a given integer
 *
 * @y: int - sould be positive
 *
 * Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		/* returns -1 for negative inputs*/
		return (-1);
	}
	else if (y == 0)
	{
		/* return 1 if n is equal to 1 or 0 */
		return (1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}
