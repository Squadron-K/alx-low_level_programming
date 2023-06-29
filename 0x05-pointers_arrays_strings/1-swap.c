#include "main.h"
/**
 * swap_int - A function that swaps value of the parameters
 * @a: first pointer
 * @b: 2nd pointer
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
