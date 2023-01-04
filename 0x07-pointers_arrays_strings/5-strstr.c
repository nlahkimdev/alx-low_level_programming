#include "main.h"

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: a string to be checked
 * @needle: a pointer to a string
 *
 * Return: return 0
 **/

char  *_strstr(char *haystack, char *needle)
{
	char *str1, *str2;

	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;
		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
