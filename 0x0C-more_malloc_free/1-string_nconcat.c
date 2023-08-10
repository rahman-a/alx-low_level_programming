#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -  a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of second string
 * Return: pointer to a newly allocated space in memory, which contains s1
 * followed by the first n bytes of s2, and null terminated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, s1Len = 0, s2Len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1Len] != '\0')
		s1Len++;
	while (s2[s2Len] != '\0')
		s2Len++;
	str = malloc(s1Len + n + 1);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
