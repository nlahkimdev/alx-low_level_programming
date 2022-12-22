#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int a = 0;
	int b = 1;
	int c;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%d", c);
		a = b;
		b = c;

		if (i != 49)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}

