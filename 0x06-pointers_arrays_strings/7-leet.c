#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @str: string
 * Return: pointer to resulted string
*/

char *leet(char *str)
{
	char *ptr = str;
	char letters[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char values[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	unsigned int i;

	while (*str)
	{
		for (i = 0; i < sizeof(letters) / sizeof(char); i++)
			if (*str == letters[i])
				*str = '0' + values[i];
		str++;
	}

	return (ptr);
}
