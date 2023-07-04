#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a character "c" in a string
 * @s: String
 * @c: character to locate
 *
 * Return: pointer to first occurrence
 */
char *_strchr(char *s, char c)
{
	int i;
	char *rtn;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			rtn = &s[i];
			break;
		}
		else
			rtn = NULL;
	}

	return (rtn);
}
