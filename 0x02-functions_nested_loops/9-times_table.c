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
		for (j = 1; j < 10;  j++)
		{
			_putchar(',');
			_putchar(' ');

			inc = i * j;

			if (inc <= 9)
				_putchar(' ');
			else
				_putchar((inc / 10) + '0');
			_putchar((inc % 10) + '0');		
		};
		_putchar('\n');
	};

}
