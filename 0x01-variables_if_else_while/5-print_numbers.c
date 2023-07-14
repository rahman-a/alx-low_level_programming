#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0 (Succcess)
*/

int main(void)
{
	int n = 0;

	for (; n < 10; n++)
	{
		printf("%d", n);
	};

	printf("\n");
	return (0);
}
