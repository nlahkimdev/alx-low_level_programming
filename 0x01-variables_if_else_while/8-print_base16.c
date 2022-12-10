#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 48;
	while (n < 103)
	{
		if (n < 58)
		{
			putchar(n);
		}
		if (n > 96)
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
