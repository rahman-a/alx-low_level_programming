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
	int sum = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
}
