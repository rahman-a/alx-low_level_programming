#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 * Return: (void)
*/

void print_diagonal(int n)
{
	int inc, space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	};

	for (inc = 1; inc <= n; inc++)
	{
		for (space = 1; space <= inc; space++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		inc++;
	};
}
