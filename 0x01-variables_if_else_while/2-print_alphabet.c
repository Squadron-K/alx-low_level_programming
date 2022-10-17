#include <stdio.h>
/**
 * main - entry point
 * Description: write a - z in lower case
 * Return
 */
int main(void)
{
	char c
		;
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
