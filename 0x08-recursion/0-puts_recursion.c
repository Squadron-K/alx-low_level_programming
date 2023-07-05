#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - print string and a newline
 * @s: string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(&s[i]);
	}
	else
		_putchar('\n');
}
