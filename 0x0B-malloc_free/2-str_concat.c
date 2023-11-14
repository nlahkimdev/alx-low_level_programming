#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1 : first string
 *
 * @s2 : second string
 *
 * Return: a pointer to a newly allocated space in memory
 * that contains the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	/* get sizeo of str */
	int size, size1, size2;
	int i;
	char *new_str;
	/* check if s1 is Null*/
	if (s1 == NULL)
		size1 = 0;
	else
	{
		/* get the lenght of s1*/
		for (i = 0; s1[i]; i++)
			size1++;
	}
	/* check if s2 is Null*/
	if (s2 == NULL)
		size2 = 0;
	else
	{
		/* get the lenght of s1*/
		for (i = 0; s2[i]; i++)
			size2++;
	}
	/*compute the size of the concatenated string*/
	size = size1 + size2;
	/* allocate memory for str */
	new_str = malloc((size + 1) * sizeof(char));
	/* handle no enough memory available */
	if (new_str == NULL)
		return (NULL);
	/* copy s1 into the dynamically allicated variable */
	for (i = 0; i < size1; i++)
		new_str[i] = s1[i];
	/* copy s2 into the dynamically allicated variable */
	for (i = 0; i < size2; i++)
		new_str[size1 + i] = s2[i];
	/* add the null character at the end of the copied string */
	new_str[size] = '\0';
	return (new_str);
}
