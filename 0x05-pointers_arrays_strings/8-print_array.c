#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: Array of integers
 * @n: number of element to be printed
 *
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d, ", a[i]);
		printf("%d\n", a[n - 1]);
	}
	else
		printf("\n");
}
