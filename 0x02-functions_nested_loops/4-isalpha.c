#include "main.h"

/**
 * _isalpha -  function that checks for alphabetic character.
 * @c: character parameter for the function
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * otherwise Always 0 (Success)
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
