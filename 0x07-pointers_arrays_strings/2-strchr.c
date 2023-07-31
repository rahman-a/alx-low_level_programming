#include "main.h"

/**
 * _strchr - a function to find  the first occurrence of the character c
 * in the string s
 * @s: targeted string
 * @c: string to search for
 * Return: a pointer to the first occurrence of the character c
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return ('\0');
}
