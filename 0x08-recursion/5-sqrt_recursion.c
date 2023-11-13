#include "main.h"

int check_sqrt(int n, int i);

/**
 * _sqrt_recursion - computes the natural square root of a number.
 *
 * @n: int - a given integer for which we want to find the square root
 *
 * Return: returns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (check_sqrt(n, 0));
}

/**
 * check_sqrt - checks if the square root of a number is correct.
 *
 * @n: int - a given integer for which we want to find the square root
 *
 * @i: int - an iterator
 *
 * Return: natural square root of a number or -1 if it didn't have it
 */
int check_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (check_sqrt(n, i + 1));
}
