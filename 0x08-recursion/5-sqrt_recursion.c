#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: a given interger
 *
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	int low = 1;
	int high = n;
	int mid;

	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		if (mid * mid == n)
			return (mid);
		else if (mid * mid < n)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
