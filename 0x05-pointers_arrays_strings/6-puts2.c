#include "main.h"
/**
 * puts2 -  function that prints every other character of a string
 * @str: array of string
 *
 * Return: Void
 */

void puts2(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}
