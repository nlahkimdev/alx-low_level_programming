#include "main.h"

/**
 * is_palindrome_helper - helper function
 *
 * @s: pointer to string params
 * @end: used to find the end of the string
 *
 * Return: recursion
 */
int is_palindrome_helper(char *s, char *end)
{
	if (s >= end)
		return (1);
	if (*s != *end)
		return (0);
	return (is_palindrome_helper(s + 1, end - 1));
}
/**
 * is_palindrome - check if the string is a palindrome
 *
 * @s: pointer to string
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	char *end = s;

	while (*end)
		end++;
	end--;
	return (is_palindrome_helper(s, end));
}
