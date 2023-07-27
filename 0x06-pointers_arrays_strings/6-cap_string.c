#include "main.h"

/**
 * isLower - check if letter lower case or not.
 * @c: character
 * Return: 1 if true, 0 of false
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - check if character is a delimiter or not.
 * @c: character
 * Return: 1 if true, 0 if false
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = "{}()\".,! \n\t?";

	for (i = 0; i < 12; i++)
		if (c ==  delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string -  a function that capitalizes all words of a string.
 * @str: string
 * Return: pointer to the resulted capitilazied string
*/

char *cap_string(char *str)
{
	char *ptr = s;
	int delimiter = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			delimiter = 1;
		else if (isLower(*s) && delimiter)
		{
			*s -= 32;
			delimiter = 0;
		}
		else
			deliimiter = 0;
		s++;
	}
	return (ptr);
}

