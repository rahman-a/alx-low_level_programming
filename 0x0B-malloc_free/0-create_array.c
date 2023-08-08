#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char.
 * @size: integer
 * @c: character
 * Return: NULL if size  = 0 or pointer to array
*/

char *create_array(unsigned int size, char c)
{
	 unsigned int i = 0;
	 char *str = malloc(sizeof(int) * size);

	 if (size == 0)
		 return NULL;

	 while (i < size)
	 {
		 str[i] = c;
		 i++;
	 }

	 return (str);
}
