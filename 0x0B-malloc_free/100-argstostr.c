#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments
 *
 * @ac : count
 *
 * @av : array of arguments (strings)
 *
 * Return: a pointer to the concatenated string, or NULL if fails
 *
 */
char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *str;
	int offset = 0;
	int size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* calculate the total size of the concatenation */
	for (i = 0; i < ac; i++)
		size += strlen(av[i]);
	/* Allocate memory for the concatenated string */
	/* ac for adding \n for each arg and 1 for the final \0 */
	str = malloc((size * sizeof(char)) + ac + 1);
	if (str == NULL)
		return (NULL);
	/* concatenate all args into one string */
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		for (j = 0; j < len; j++)
		{
			str[offset] = av[i][j];
			offset++;
		}
		/* add a newline between arguments */
		str[offset] = '\n';
		/* increment the offset */
		offset++;
	}
	/* add '\0' at the end of the sring */
	str[offset] = '\0';
	return (str);
}
