#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array of integers
 * @size: array size
 * @cmp: function pointer
 * Return: index of the first element for which the
 * cmp function does not return 0
 * If no element matches, return -1,
 * If size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
