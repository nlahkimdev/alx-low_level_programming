#include <string.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int n = 0;

	for (n = 0; n < strlen(alphabet); n++)
	{
		putchar(alphabet[n]);
	}
	putchar('\n');
}

