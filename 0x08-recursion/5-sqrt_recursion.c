#include "main.h"

/**
 * square2 - find a natural square root
 * @n: number
 * @b: base int
 * Return: int
*/

int square2(int n, int b)
{
	if (b * b == n)
		return (b);
	if (b * b > n)
		return (-1);
	return (square2(n, b + 1));
}


/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: number
 * Return: number
*/

int _sqrt_recursion(int n)
{
	return (square2(n, 1));
}
