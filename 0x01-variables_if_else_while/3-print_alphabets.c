#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	size_t n = 0;

	for (n = 0; n < strlen(alphabet); n++)
	{
		putchar(alphabet[n]);
	}
	for (n = 0; n < strlen(alphabet); n++)
	{
		putchar(toupper(alphabet[n]));
	}
	putchar('\n');
	return (0);
}
