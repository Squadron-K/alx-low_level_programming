#include "main.h"
/**
 * print_rev - printout in reverse
 * @s: array of string
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	for (;len >= 0; len--)
		_putchar(s[len]);

	_putchar('\n');
}
