#include "main.h"

/**
 * create_array - creates an array of chars
 *
 * @size : size of array
 *
 * @c : a string
 *
 * Return: an array of char containing the c string
 */
char *create_array(unsigned int size, char c)
{
	/* create an array of char */
	char *arr = malloc(size * sizeof(char));
	unsigned int i;
	if (arr == NULL)
		return NULL;
	/* if size 0 return NULL */
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return arr;
}
