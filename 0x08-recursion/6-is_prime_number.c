#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - checks if a number is Prime
 *
 * @n: int - a given integer to check
 *
 * Return: returns 1 if Prime, O if not
 */
int is_prime_number(int n)
{
	if (n  <= 1)
		return (0);
	else
		return (check_prime(n, 2));
}

/**
 * check_prime - checks if a number is Prime
 *
 * @n: int - a given integer to check
 *
 * @i: int - an iterator
 *
 * Return: returns 1 if Prime, O if not
 */
int check_prime(int n, int i)
{
	if (i > n / 2)
		return (1);
	else if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}
