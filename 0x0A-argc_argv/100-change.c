#include "main.h"
#include <stdlib.h>
#include <string.h>

int check_change(int amount);
/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 *
 * @argc : arguments count
 *
 * @argv : arguments vector
 *
 * Return: 0 if success, anything else if error
 */
int main(int argc, char *argv[])
{
	int count = 0;
	int amount;
	
	/* check numbers of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* strore the first argument in a variable*/
	amount = atoi(argv[1]);
	
	/*check if the argument is negative*/
	if (amount < 0)
	{
		printf("%d\n", count);
	}
	else
	{
		count = check_change(amount);
		printf("%d\n", count);
	}
	return (0);
}


/**
 * check_change - checks number of coins
 *
 * @amount: amount to check
 *
 * Return: number of coins
 */
int check_change(int amount)
{
	int i = 0;
	int count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		while (amount - coins[i] >= 0)
		{
			amount -= coins[i];
			count++;
		}
	}
	return (count);
}
