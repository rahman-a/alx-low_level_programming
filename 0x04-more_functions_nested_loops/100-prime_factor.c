#include <stdio.h>
#include <math.h>
#define NUMBER 612852475143

/**
 * maxPrimeFactor - find the largest prime factor of a certain number
 * @n: the targeted number to find its largest prime factor
 * Return: largest prime factor
*/

long int maxPrimeFactor(long int n)
{
	int prime, max;

	while (n % 2 == 0)
		n = n / 2;

	for (prime = 3; prime <= sqrt(n); prime += 2)
	{
		while (n % prime == 0)
		{
			n = n / prime;
			max = prime;
		}
	};

	if (n > 2)
		max = n;
	return (max);
}
/**
 * main - Entry point
 *
 * Description: a program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("%ld\n", maxPrimeFactor(NUMBER));
	return (0);
}
