#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: string to print.
 *
 * Return: length of a string s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		/* if the current character '\0', the length is 0.*/
		return (0);
	}
	else
	{
		/* the function returns 1 for the current character */
		/* plus the length of the rest of the string */
		/* computed by the recursive call with s + 1 */
		return (1 + _strlen_recursion(s + 1));
	}
}
