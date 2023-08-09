#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure or pointer to a newly allocated space in memory
 * which contains the contents of s1
 * followed by the contents of s2, and null terminated
*/

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0, s1size = 0, s2size = 0;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	while (s1 && s1[s1size] != '\0')
		s1size++;
	while (s2 && s2[s2size] != '\0')
		s2size++;
	str = malloc((s1size + s2size) + 1);
	if (str == 0)
		return (NULL);
	while (i < s1size)
	{
		str[i] = s1[i];
		i++;
	}
	while (j < s2size)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
