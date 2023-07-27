#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @str: string
 * Return: pointer to the resulted string
*/

char *rot13(char *str)
{
	int i;
	char *ptr = str;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*str)
	{
		for (i = 0; i < 52; i++)
		{
			if (*str == letters[i])
			{
				*str = rot13[i];
				break;
			}
		}
	}

	return (str);
}
