#include "main.h"
/**
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, len = 0, j;

	while (s[i] != ' ')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				len++;
		}
		i++;
	}
	return (len);
}
