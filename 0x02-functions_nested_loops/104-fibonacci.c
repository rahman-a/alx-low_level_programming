#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that finds and prints the first
 * 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count = 0;
	unsigned long sq1 = 0, sq2 = 1, sum = 0;

	while (count < 98)
	{
		sum = sq1 + sq2;
		sq1 = sq2;
		sq2 = sum;

		if (count == 97)
			printf("%lu\n", sum);
		else
			printf("%lu, ", sum);
		count++;
	};
	return (0);
}
