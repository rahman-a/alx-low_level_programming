#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: a program that multiplies two number.
 * @argc: arguments count
 * @argv: arguments values
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < 3; i++)
		sum *= atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
