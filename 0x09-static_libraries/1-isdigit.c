#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: character to check if it is digit or not
 * Return: 1 if digit or 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
