#include "main.h"

/**
 * _islower -  a function that checks for lowercase character.
 *
 * @c: charachter parameter of the function
 *
 * Return: 1 if (c) is lower case, otherwise Always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
