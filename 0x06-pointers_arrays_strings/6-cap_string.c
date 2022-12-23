#include "main.h"

/**
 * cap_string - capitalize all words
 *
 * @str: a string
 *
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char sep[] = " \t\n,;.!?\"(){}";

	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
				*(str + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (sep[j] == *(str + i - 1))
						*(str + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (str);
}
