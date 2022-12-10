#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;
	char ld[] = "Last digit of";
	char greater[] = "and is greater than 5";
	char zero[] = "and is 0";
	char lesser[] = "and is less than 6 and not 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("%s %i is %i %s\n", ld, n, last_digit, greater);
	}
	else if (last_digit == 0)
	{
		printf("%s %i is %i %s\n", ld, n, last_digit, zero);
	}
	else if (last_digit != 0 && last_digit < 6)
	{
		printf("%s %i is %i %s\n", ld, n, last_digit, lesser);
	}
	return (0);
}

