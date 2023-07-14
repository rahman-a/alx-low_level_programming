#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num <= 15)
	{
		printf("%x", num);
		num++;
	};

	printf("\n");
	return (0);
}
