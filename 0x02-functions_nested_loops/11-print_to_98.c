#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n: the first number to start with until 98
 *
 * Return: void
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	else
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	printf("98\n");
}
