#include <stdio.h>
/**
 * main - entry point
 * Description: print single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
