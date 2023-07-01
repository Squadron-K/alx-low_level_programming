#include "main.h"
/**
 * reverse_array - Inverse element in an array
 * @a: array of numbers
 * @n: number of elemnet in array
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
