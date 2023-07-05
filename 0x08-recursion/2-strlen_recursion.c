#include "main.h"
/**
 * _strlen_recursion - returns length of string
 * @s: string
 *
 * Return: length of 's'
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	i++;
	return (_strlen_recursion(&s[i]) + 1);
}
