#include <stdio.h>
#define MAX 100000000

/**
 * numLength - a function to calculate the length of number
 * @n: the targeted number to get its length
 *
 * Return: numerical rep fo the number length
*/

int numLength(int n)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	};
	return (length);
}

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
	int count = 0, zeros;
	unsigned long sq1 = 0, sq2 = 1, sum = 0, sq1a = 0, sq2a = 0, suma = 0;

	while (count < 98)
	{
		if (sq1a > 0)
			printf("%lu", sq1a);
		zeros = numLength(MAX) - 1 - numLength(sq1);
		while (sq1a > 0 && zeros > 0)
		{
			printf("%d", 0);
			zeros--;
		}
		printf("%lu", sq1);
		sum = (sq1 + sq2) % MAX;
		suma = sq1a + sq2a + (sq1 + sq2) / MAX;
		sq1 = sq2;
		sq2 = sum;
		sq1a = sq2a;
		sq2a = suma;
		if (count == 97)
			printf("\n");
		else
			printf(", ");
		count++;
	};
	return (0);
}
