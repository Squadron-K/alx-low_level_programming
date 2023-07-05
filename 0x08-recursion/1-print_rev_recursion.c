#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int len = 0, i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
