#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 *
 * @argc : arguments count
 *
 * @argv : arguments vector
 *
 * Return: 0 if success, anything else if error
 */
int main(int argc, char *argv[])
{
	(void) argv; 
	printf("%d\n", argc - 1);
	return (0);
}
