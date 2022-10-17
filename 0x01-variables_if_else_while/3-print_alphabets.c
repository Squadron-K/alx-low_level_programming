#include <stdio.h>
/**
 * main - entry point
 * Description: print alphabet in lowercase, and then uppercase
 * Return: 0
 */
int main(void)
{
	char c, m;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (m  = 'A'; m  <= 'Z'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
