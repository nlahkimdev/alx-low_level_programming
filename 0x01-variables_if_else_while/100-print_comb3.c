#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 58; m++)
		{
			/* Omitting similar digits */
			if (n != m && n < m)
			{
				/* Omitting the multiples of 10 */
				if (m != 48)
				{
					putchar(n);
					putchar(m);
					if (n != 56 || m != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
