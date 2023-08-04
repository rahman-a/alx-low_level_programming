#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 (Success) or 1 (Error)
*/

int main(int argc, char *argv[])
{
	int i, sum = 0, coins[] = {25, 10, 5, 2, 1}, cents;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			sum++;
			cents -= coins[i];
		}
	}
	printf("%d\n", sum);
	return (0);
}
