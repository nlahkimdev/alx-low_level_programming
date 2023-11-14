#include "main.h"

/**
 * _strdup - copy a string in memory
 *
 * @str : a string
 *
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	/* get sizeo of str */
	int size = strlen(str);
	int i;
	char *new_str;

	if (str == NULL)
		return (NULL);
	/* allocate memory for str */
	new_str = malloc((size + 1) * sizeof(char));
	/* handle no enough memory available */
	if (new_str == NULL)
		return (NULL);
	/* copy the string into the dynamically allicated variable */
	for (i = 0; i < size; i++)
		new_str[i] = str[i];
	/* add the null character at the end of the copied string */
	new_str[size] = '\0';

	return (new_str);
}
