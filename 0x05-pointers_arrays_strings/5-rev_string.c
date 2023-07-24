#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string to reverse it
 * Return: (void)
*/

void rev_string(char *s)
{
	int l = 0, i;
	char temp;

	while (s[l])
		l++;
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	};
}
