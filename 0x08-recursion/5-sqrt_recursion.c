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
	int start;
	int end = n;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	start = 1;
	while (start <= end)
	{
		int mid = (start + end) / 2;

		if (mid == n / mid)
		{
			if (mid * mid == n)
				return (mid);
			else
				return (-1);
		}
		if (mid < n / mid)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (end);
}
