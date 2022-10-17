#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: print if a number is positive or negative
 * Return: 0
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("positive %d\n",n);
	}
	else if(n == 0)
	{
		printf("is zero %d\n",n);
	}
	else if (n < 0)
	{
		printf("negative %d\n",n);
	return (0);
}
