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
	/* get sizeo of str*/
	int size = strlen(str);
	int i;
	char *new_str;
	
	/* allocate memory for str */
	new_str = malloc(size * sizeof(char));

	if (new_str == NULL)
		return (NULL);
	/* if size 0 return NULL */
	if (new_str == 0 || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		new_str[i] = str[i];
	return (new_str);
}
