#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
 int i, n = 0;
char str[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
for (i = 0; i < strlen(str); ++i)
	putchar(str[i]);
return (1);
}
