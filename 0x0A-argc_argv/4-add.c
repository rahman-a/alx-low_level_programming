#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * isnumber - check if string number or not
 * @str: string
 * Return: 1 if digit, 0 if not digit
*/

int isnumber(char *str)
{
	int i = 0, length = strlen(str);

	while (i < length)
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Entry point
 * Description: a program that adds positive numbers..
 * @argc: arguments count
 * @argv: arguments values
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isnumber(argv[i]))
			{
				sum += atoi(argv[i]);
			} else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
