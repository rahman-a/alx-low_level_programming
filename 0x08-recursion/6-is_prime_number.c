#include "main.h"

/**
 * checkPrime - a function to check if n is prime or not
 * @n: int
 * @b: int
 * Return: 0 or 1
*/

int checkPrime(int n, int b)
{
	if (b >= n && n > 1)
		return (1);
	if (n % b == 0 && n <= 1)
		return (0);
	return (checkPrime(n, b + 1));
}

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: number
 * Return: number
*/

int is_prime_number(int n)
{
	return (checkPrime(n, 2));
}
