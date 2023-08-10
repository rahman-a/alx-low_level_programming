#include <stdlib>
#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: integer
 * @max: integer
 * Return: a pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int diff = max - min + 1;
	int *ptr = malloc(sizeof(int) * diff);
	int i = 0;

	if (ptr == 0)
		return (NULL);
	if (min > max)
		return (NULL);
	while (i < diff)
	{
		ptr[i] = min++;
		i++;
	}
	return (ptr);
}
