#include "main.h"
/**
 * _strchr - Locates a character "c" in a string
 * @s: String
 * @c: character to locate
 *
 * Return: pointer to first occurrence
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		if (s[i] == c)
		{
			return (&s[i]);
		}

	return ("NULL");
}
