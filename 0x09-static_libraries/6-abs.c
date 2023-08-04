#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 * @n: number parameter if the function _abs
 *
 * Return: the absolute number of the argument
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
