#include <stdio.h>
#include <string.h>

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
		if (alphabet[n] != 'q')
		{
			if (alphabet[n] != 'e')
			{
				putchar(alphabet[n]);
			}
		}
	}
	putchar('\n');
	return (0);
}
