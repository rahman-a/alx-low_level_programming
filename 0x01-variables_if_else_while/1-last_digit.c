#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: This program will assign a random number to the variable n
 * each time it is executed. Complete the source code in order
 * to print the last digit of the number stored in the variable n.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n, l_int;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_int = n % 10;
	if (l_int > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l_int);
	else if (l_int == 0)
		printf("Last digit of %d is %d and is 0\n", n, l_int);
	else if (l_int < 6 && l_int != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_int);
	return (0);
}
