#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first integer pointer
 * @b: second integer pointer
 * Return: (void)
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
