#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c:  a given character
 *
 * Return: 1 if c is a letter, 0 if not
 */
int _isalpha(int c)
{
	/*let's assume that c is a lowercase*/
	/* a = 97 && A = 65 */
	/*fact: uppercase are always lower thatn lowercase letters*/
	/*91 and below is upper case  97 and above is lowercase */

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
