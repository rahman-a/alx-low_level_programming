#include "main.h"

/**
 * print_line -  a function that draws a straight line in the terminal.
 * @n: the number of times the character _ should be printed
 * Return: (void)
*/

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	};

	while (i < n)
	{
		_putchar('_');
		i++;
	};
	_putchar('\n');
}
