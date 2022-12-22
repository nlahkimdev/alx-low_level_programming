#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int sum;
	int mul3;
	int mul5;
	int i;

	for (i = 0, i < 1024; ++)
	{
		if ((i % 3) == 0)
			mul3 += i;
		else if ((i % 5) == 0)
			mul5 += i;
	}
	sum = mul3 + mul5;
	printf("%d\n", sum);
	return (0);
}

