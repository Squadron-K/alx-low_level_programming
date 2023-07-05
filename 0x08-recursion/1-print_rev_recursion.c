#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int j = 0, i = 0;

	if (s[i] == '\0')
		return;

	if (s[i] != '\0')
	{
		i++;
		j++;
		_print_rev_recursion(&s[i]);
		j--;
		_putchar(s[j]);
	}
	else
		_putchar('\n');
}
