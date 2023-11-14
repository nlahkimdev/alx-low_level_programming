#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that adds positive numbers
 *
 * @argc : arguments count
 *
 * @argv : arguments vector
 *
 * Return: 0 if success, anything else if error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		/* grab the lenght of the argument*/
		int len = strlen(argv[i]);
		/* check if the argument is a number */
		for (j = 0; j < len; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		/* convert the argument to an integer and compute the sum */
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
