#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	long int sq1 = 1, sq2 = 2;

	printf("%ld, %ld, ", sq1, sq2);

	for (i = 0; i < 50; i++)
	{
		long int sum = sq1 + sq2;

		if (i < 49)
			printf("%ld, ", sum);
		else
			printf("%ld", sum);

		sq1 = sq2;
		sq2 = sum;
	};
	printf("\n");
	return (0);
}
