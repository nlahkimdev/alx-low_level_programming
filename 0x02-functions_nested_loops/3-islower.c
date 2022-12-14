#include "main.h"

/**
 * _islower - Entry point
 *
 * @c:  a given character
 *
 * Return: 1 if c is lowercase and 0 is c is Uppercase
 */
int _islower(int c)
{
	/*let's assume that c is a lowercase*/
	/* a = 97 && A = 65 */
	/*fact: uppercase are always lower thatn lowercase letters*/
	/*91 and below is upper case  97 and above is lowercase */

	if (c <= 90 && c >= 65)
	{
		return (0);
	}
	else if (c <= 122 && c >= 97)
	{
		return (1);
	}
	return (0);
}
