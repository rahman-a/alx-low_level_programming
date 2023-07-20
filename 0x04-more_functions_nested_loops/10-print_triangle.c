#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: the size of the triangle
 * Return: (void)
*/

void print_triangle(int size)
{
	int row, column, space;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	};

	for (row = 1; row <= size; row++)
	{
		for (space = 1; space <= size - row; space++)
			_putchar(' ');
		for (column = 1; column <= row; column++)
			_putchar('#');
		_putchar('\n');
	}

}
