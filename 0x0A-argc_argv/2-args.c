#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints all arguments it reveives.
 * @argc: arguments count
 * @argv: arguments values
 * Return: Always 0 (Success)
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
