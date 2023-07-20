#include "main.h"
#include <stdio.h>
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
	};

	while (i < n)
	{
		if (i > 0)
		{
			int inc;

			for (inc = 0; inc < i; inc++)
				_putchar(' ');
		};
		_putchar('\\');
		_putchar('\n');
		i++;
	};

	_putchar('\n');

}
