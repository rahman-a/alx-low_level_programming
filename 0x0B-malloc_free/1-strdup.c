#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: pointer
 * Return: a pointer to a new string which is a duplicate of the string str
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *cpstr;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	cpstr = malloc(size + 1);

	if (cpstr == 0)
		return (NULL);

	while (i < size)
	{
		cpstr[i] = str[i];
		i++;
	}
	return (cpstr);
}
