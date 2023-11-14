#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if strings are identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	// Check if both strings are empty, return 1 if true
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	// Check if s2 starts with '*', the next character is not the end of s2
	// and s1 is empty, return 0
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	// If s1 and s2 are the same
	// recursively call the function with the next characters.
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	// if s2 match the *
	// recursivelly call the function with 2 possibilities
	// matching 0 characters or *
	// matching 1 or more character
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	// if none of the above conditions, return 0
	return (0);
}
