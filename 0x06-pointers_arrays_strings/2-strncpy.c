#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: destination string
 * @src: source string
 * @n: n bytes from source string
 * Return: a pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int track;

	for (track = 0; track < n && src[track] != '\0'; track++)
		dest[track] = src[track];

	while (track < n)
	{
		dest[track] = '\0';
		track++;
	}

	return (dest);
}
