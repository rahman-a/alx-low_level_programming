#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: string one
 * @s2: string two
 * Return: 0 if both equal or less than 0 if s2 < s1
 * or more than 0 if s1 greater than s2
*/

int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			comp = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}

	return (comp);
}
