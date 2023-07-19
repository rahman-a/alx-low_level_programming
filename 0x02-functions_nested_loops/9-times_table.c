#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 *
 * Return: void
*/

void times_table(void)
{
	int i, j, inc;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j < 10;  j++)
		{
			inc = i * j;
			if (inc <= 9)
				_putchar(' ');
			_putchar(inc + '0');
			_putchar(',');
			_puthcar(' ');
		};
		_putchar('\n');
	};

}
