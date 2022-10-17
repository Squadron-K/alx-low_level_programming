#include <stdio.h>
/**
 * main - entry point
 * description: print lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
