#include "main.h"

/**
 * main - prints all argumetns, one per line
 *
 * @argc : arguments count
 *
 * @argv : arguments vector
 *
 * Return: 0 if success, anything else if error
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
