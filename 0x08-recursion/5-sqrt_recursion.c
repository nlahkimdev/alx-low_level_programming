#include "main.h"

/**
 * _sqrt_recursion_helper - returns the natural square root of a number
 *
 * @n: a given integer
 * @i: a given integer
 *
 * Return: natural square root of a number
 */

int _sqrt_recursion_helper(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (_sqrt_recursion_helper(i + 1, n));
	else
		return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: a given interger
 *
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	int result;

	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	result = _sqrt_recursion_helper(1, n);
	if (result * result == n)
		return (result);
	else
		return (-1);
}
