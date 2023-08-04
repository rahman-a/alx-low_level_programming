#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints the number of arguments.
 * @argc: arguments count
 * @argv: arguments values
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
