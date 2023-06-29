#include "main.h"
/**
 * _strlen - length of string
 * @s: array of string
 *
 * Return: Always string_length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
