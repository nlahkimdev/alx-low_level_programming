#include "main.h"

/**
 * _strcmp - entry point
 *
 * @s1: first string
 * @s2: decond string
 *
 * Return: 0 is s1 is equal to s2
 * neg num if s1 < s2
 * pos num if s1 > s2
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int d = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			d = s2[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			d = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (d);
}
