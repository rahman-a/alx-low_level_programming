#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: integer
 * @max: integer
 * Return: a pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *ptr, diff, i = 0;

	if (min > max)
		return (NULL);
	diff = max - min + 1;
	ptr = malloc(sizeof(int) * diff);
	if (ptr == NULL)
		return (NULL);
	while (i < diff)
	{
		ptr[i] = min++;
		i++;
	}
	return (ptr);
}
