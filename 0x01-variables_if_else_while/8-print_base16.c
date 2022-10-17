#include <stdio.h>
/**
 * main - entry point
 * Description: print all the number in base 16
 * Return: 0
 */
int main(void)
{
	int c, m;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
