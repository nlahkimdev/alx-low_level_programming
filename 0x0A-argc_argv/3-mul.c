#include "main.h"
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 *
 * @argc : arguments count
 *
 * @argv : arguments vector
 *
 * Return: 0 if success, anything else if error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
