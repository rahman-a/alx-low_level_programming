#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  C program that prints the size of various types.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeOf(char));
	printf("Size of an int: %ld byte(s)\n", sizeOf(int));
	printf("Size of a long int: %ld byte(s)\n", sizeOf(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeOf(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeOf(float));
	return (0);
}
