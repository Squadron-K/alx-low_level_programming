#include "main.h"
/**
 *
 */

char *_strcat(char *dest, char *src)
{
	int j = 0, i = 1, len = 0;
	char temp;

	while (src[len] != '\0')
	{
		i++;
		len++;
	}
	while (dest[j] != '\0')
	{
		j++;
		len++;
	}

	for (; i <= len; i++)
	{
		temp = src[i -1];
		dest [i] = temp;
	}

	return (dest);
}
