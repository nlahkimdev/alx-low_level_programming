#include "main.h"
/**
 * is_prime_number_helper - check if n is a prime number
 *
 * @n: an integer
 * @i: an integer
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number_helper(int n, int i)
{
	if (n == 2 || n == 3)
		return (1);
	if (n < 2)
		return (0);
	if (n % i == 0)
		return (0);
	if (i <= n / i)
		return (is_prime_number_helper(n, i + 1));
	return (1);
}
/**
 * is_prime_number - check if n is a prime number
 *
 * @n: an integer
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));
}
