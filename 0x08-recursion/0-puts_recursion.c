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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
