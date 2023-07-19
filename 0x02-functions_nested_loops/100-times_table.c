#include "main.h"

/**
 * print_times_table - a function that prints the n times table, starting with 0
 * @n: the number parameter
 *
 * Return: void
*/

void print_times_table(int n)
{
	int i, j, inc;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				inc = i * j;

				if (inc <= 9)
					_putchar(' ');
				if (inc <= 99)
					_putchar(' ');
				if (inc >= 100)
				{
					_putchar((inc / 100) + '0');
					_putchar((inc / 10) + '0');
				} else if (inc <= 99 && inc >= 10)
				{
					_putchar((inc / 10) + '0');
				};
				_putchar((inc % 10) + '0');
			};
			_putchar('\n');
		};
	};

}
