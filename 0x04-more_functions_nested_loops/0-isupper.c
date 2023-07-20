#include <stdio.h>

/**
 * _isupper - a function that checks for uppercase character.
 * @c: character ti check if uppercase or not
 * Return: 1 if c uppercase or 0 otherwise
*/

int _isupper(int c)
{
	if (c <= 65 && c >= 90)
		return (1);
	else
		return (0);
}
