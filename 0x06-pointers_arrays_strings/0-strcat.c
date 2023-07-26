#include "main.h"

/**
 * *_strcat -  a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int track1 = 0, track2 = 0;

	while (dest[track1])
		track1++;

	while (src[track2])
	{
		dest[track1++] = src[track2];
		track2++;
	};

	return (dest);
}

