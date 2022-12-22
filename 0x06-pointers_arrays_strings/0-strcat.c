#include "main.h"
#include <stdio.h>
/**
 * *_strcat - contacetas a string to another one
 *
 * @dest: a pointer the the first string
 * @src: a pointer to the string we want to add to the first one
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int c;
	int i;

	while (dest[c] != '\0')
		c++;
	for (i = 0; src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (0);
}
