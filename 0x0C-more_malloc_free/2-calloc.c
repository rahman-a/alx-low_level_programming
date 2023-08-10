#include <stdlib.h>
#include "main.h"

/**
 * _memset - fill memeory with fixed byte
 * @s: pointer
 * @b: fixed byte
 * @size: size of allocated memory
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int size)
{
	char *alt = s;

	while (size--)
	{
		*s++ = b;
	}

	return (alt);
}

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: integer
 * @size: integer
 * Return: a pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *loc;
	unsigned int memsize = sizeof(int) * nmemb;

	if (nmemb == 0 || size == 0)
		return (NULL);
	loc = malloc(memsize);
	if (loc == 0)
		return (NULL);
	_memset(loc, 0, memsize);
	return (loc);
}
