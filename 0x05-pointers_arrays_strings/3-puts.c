#include "main.h"
/**
 * _puts - Write to STDOUT
 * @str: array of string
 *
 * Return: Void
 */

void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
