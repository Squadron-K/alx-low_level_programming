#include "main.h"
/**
 * rev_string - reverse string
 * @s: array of string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char p;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len--; i++)
	{
		p = s[i];
		s[i] = s[len];
		s[len] = p;
	}
}
