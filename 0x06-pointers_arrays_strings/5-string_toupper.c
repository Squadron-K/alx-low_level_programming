#include "main.h"
/**
 * string_toupper - Change Lowercase to Uppercase
 * @s: array of string
 *
 * Return: New string
 */
char *string_toupper(char *s)
{
	int caps = 65, sml = 97;
	int i = 0;

	while (s[i] != '\0')
	{
		while (sml < 123)
		{
			if (s[i] == sml)
			{
				s[i] = caps;
			}
			caps++;
			sml++;
		}
		i++;
		caps = 65;
		sml = 97;
	}
	return (s);
}
