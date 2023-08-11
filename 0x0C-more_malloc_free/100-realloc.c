#include <stdlib.h>
#include "main.h"

/**
 * _realloc - a function that reallocates a memory
 * block using malloc and free
 * @ptr: pointer
 * @old_size: integer
 * @new_size: integer
 * Return: a pointer to reallocated memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *realloc;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		realloc = malloc(new_size);
		if (realloc == NULL)
			return (NULL);
		return (realloc);
	}
	if (new_size > old_size)
	{
		realloc = malloc(new_size);
		if (realloc == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)realloc + i) = *((char *)ptr + i);
		free(ptr);
	return (realloc);
}
