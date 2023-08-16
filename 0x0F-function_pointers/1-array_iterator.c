#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function
 * given as a parameter on each element of an array
 * @array: array of integers
 * @size: array size
 * @action: function pointer
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array && size && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
