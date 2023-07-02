#include "main.h"
/**
 * cap_string - Make first word uppercase
 * @s: string
 *
 * Return: value s
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char op[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}'};

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == op[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}

		}
		i++;
	}
	return (s);
}
