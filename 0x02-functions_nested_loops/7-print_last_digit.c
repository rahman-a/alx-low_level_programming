#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: number parameter for the function
 *
 * Return: the last digit of n number
*/

int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
