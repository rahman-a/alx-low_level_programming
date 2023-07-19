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
	unsigned long sq1 = 1, sq2 = 2;
	unsigned long sum = sq1 + sq2;

	printf("%lu, %lu, ", sq1, sq2);

	for (i = 0; i < 48; i++)
	{
		if (i == 47)
			printf("%lu \n", sum);
		else
			printf("%lu, ", sum);

		sq1 = sq2;
		sq2 = sum;
		sum = sq1 + sq2;
	};
	return (0);
}
