#include "main.h"

int check_sqrt(int n, int i);

/**
 * _sqrt_recursion - a function that compute the natural square root of a number.
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
 * check_sqrt - a function that check if the square root of a number is correct.
 *
 * @n: int - a given integer for which we want to find the square root
 *
 * @i: int - an iterator
 *
 * Return: returns the natural square root of a number.
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
