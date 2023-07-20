#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 * Return: (void)
*/

void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < n)
	{
		_putchar('\');
		i++;
	};

	_putchar('\n');
}
