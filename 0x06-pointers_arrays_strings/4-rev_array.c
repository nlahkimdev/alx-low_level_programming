#include "main.h"

/**
 * reverse_array - entry point
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int *start;
	int *end;
	int c;
	int i;

	start = a;
	end = a;

	for (i = 0; i < n - 1; i++)
		end++;
	for (i = 0; i < n / 2; i++)
	{
		c = *end;
		*end = *start;
		*start = c;
		start++;
		end--;
	}
}
