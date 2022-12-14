#include "main.h"

/**
 * _abs - Entry point
 *
 * @n:  a given number
 *
 * Return: computes the absolute value of an integer
 *
 */
int _abs(int n)
{
	if (n < 0)
	{
		n  = n * -1;
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (n);
	}
	return (0);
}
