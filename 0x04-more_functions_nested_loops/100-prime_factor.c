#include <stdio.h>

/*
 * main - entry point
 *
 * @n: a given number
 *
 * Return: Always 0 if success
 */
int main(void)
{
	long int i;
	long int n;

	n = 612852475143;

	for (i = n-1; i > 0; i--)
	{
		if (n % i == 0)
			printf("%li\n", i);

	}
	return (0);
}
