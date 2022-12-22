#include "main.h"

/**
 * *_strncat - entry point
 *
 * @dest: destination string
 * @src: a string to be concatenate to dest
 * @n: a given int
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int c = 0;

	while (dest[i++])
		c++;
	for (i = 0; src[i] && i < n; i++)
		dest[c++] = src[i];
	return (dest);
}
