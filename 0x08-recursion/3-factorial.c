#include "main.h"

/**
 * factorial_strlen_recursion - a function that returns the length of a string
 *
 * @n: int - sould be positive
 *
 * Return: the factorial of the given number n 
 */
int factorial(int n)
{
	if (n < 0)
	{
		/* returns -1 for negative inputs*/
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		/* return 1 if n is equal to 1 or 0 */
		return (1);
	}
	else
	{
		/* returns n then call the function recursively for n - 1*/
		return (n * factorial(n - 1));
	}
}
