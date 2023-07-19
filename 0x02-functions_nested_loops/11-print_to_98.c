#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n: the first number to start with until 98
 *
 * Return: void
*/

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0');
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		};
	};
	_putchar('\n');
}
