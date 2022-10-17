#include <stdio.h>
/**
 * main - entry point
 * Description: print all digit number of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c <= 10; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
	return (0);
}
