#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: check if the last digit of n is greater or less than 5
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("the last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("the last digit of %d is %d and is 0\n", n, n % 10);
	}
	else 
	{
		printf("the last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
