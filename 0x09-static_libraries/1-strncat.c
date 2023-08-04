#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: n bytes of source string
 * Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int track1 = 0, track2 = 0;

	while (dest[track1])
		track1++;

	for (track2 = 0; track2 < n && src[track2] != '\0'; track2++)
	{
		dest[track1] = src[track2];
		track1++;
	};

	dest[track1 + track2] = '\0';

	return (dest);
}
