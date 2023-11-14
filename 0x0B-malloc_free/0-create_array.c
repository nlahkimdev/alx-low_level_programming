#include "main.h"

/**
 * create_array - creates an array of chars
 *
 * @size : size of array
 *
 * @c : arguments vector
 *
 * Return: 0 if success, anything else if error
 */
char *create_array(unsigned int size, char c)
{
	/* create an array of char */
	char *arr = malloc(size * sizeof(char));
	unsigned int i;
	
	if (arr == NULL)
	{
	return NULL;
	}
	for (i = 0; i < size; i++)
	{
	arr[i] = c;
	}
	return arr;
}
