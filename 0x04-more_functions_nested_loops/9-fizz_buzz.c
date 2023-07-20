#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints the numbers from 1 to 100
 *  followed by a new line. But for multiples of three print
 *  Fizz instead of the number and for the multiples of five
 *  print Buzz. For numbers which are multiples
 *  of both three and five print FizzBuzz.
 *  Return: Always 0 (Success)
*/

int main(void)
{
	int inc;

	for (inc = 1; inc <= 100; inc++)
	{
		if (inc % 3 == 0 && inc % 5 != 0)
		{
			printf("Fizz");
		}
		else if (inc % 5 == 0 && inc % 3 != 0)
		{
			printf("Buzz");
		}
		else if (inc % 3 == 0 && inc % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", inc);
		};

		if (inc == 100)
		{
			printf("\n");
		} else
		{
			printf(" ");
		}
	}
	return (0);
}
