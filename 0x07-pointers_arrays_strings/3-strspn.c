#include "main.h"

/**
 * _strspn - a function to find number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: the initial segment
 * @accept: character
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i] >= '\0')
	{
		for (j = 0; accept[j] >= '\0'; j++)
			if (s[i] == accept[j])
				return (i);
		i++;
	}
	return (i);
}


