#include "main.h"
#include <string.h>

int check_palindrome(char *s, int i);

/**
 * is_palindrome - checks if a string is palindrome
 *
 * @s: a pointer to the string
 *
 * Return: 1 if string is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	return (check_palindrome(s, 0));
}


/**
 * check_palindrome - checks if a string is plaindrome
 *
 * @s: a pointer to the string
 *
 * @i: iterator
 *
 * Return: 1 if string is palindrome, 0 if not
 */
int check_palindrome(char *s, int i)
{
	int len = strlen(s);

	if (i == len)
		return (1);
	else if (s[i] != s[len - 1 - i])
		return (0);
	else
		return (check_palindrome(s, i + 1));
}
