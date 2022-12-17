#include <stdio.h>
#include "main.h"

/**
 * main - the fizz buzz program
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzBuzz[] = "FizzBuzz";

	for (a = 1; a < 101; a++)
	{
		if (a % 3 == 0)
			printf("%s ", fizz);
		else if (a % 5 == 0)
			printf("%s ", buzz);
		else if (a % 3 == 0 && a % 5 == 0)
			printf("%s ", fizzBuzz);
		else
			printf("%i ", a);
	}
	printf("%c", '\n');
	return (0);
}
