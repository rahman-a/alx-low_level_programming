#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * Return: (void)
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			int last_number = j % 10;

			if (j > 9)
				_putchar(1 + '0');
			_putchar(last_number + '0');
		};
		_putchar('\n');
	};
}
