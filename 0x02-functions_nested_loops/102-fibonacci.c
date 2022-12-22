#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned int = 0;
	unsigned int b = 1;
	unsigned int c;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%hi", c);
		a = b;
		b = c;

		if (i != 49)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}

