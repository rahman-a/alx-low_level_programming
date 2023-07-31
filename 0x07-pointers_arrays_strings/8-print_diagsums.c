#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function to add diagonal number of 2d array to eahc other
 * @a: 2d array
 * @size: size of array
 * Return: (void)
*/

void print_diagsums(int *a, int size)
{
	int i, acc1, acc2;

	for (i = 0; i < size; i++)
	{
		acc1 += a[i];
		acc2 += a[size - i - 1];
		a += size;
	}
	printf("%d,  ", acc1);
	printf("%d\n", acc2);
}

