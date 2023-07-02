#include "main.h"
/**
 * leet - translate words into leet
 * @s: string
 *
 * Return: string
 */
char *leet(char *s)
{
	int j, i = 0;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
				s[i] = b[j];
		}
		i++;
	}

	return (s);
}
