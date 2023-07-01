#include "main.h"
/**
 *
 */

char *_strcat(char *dest, char *src)
{
	int j = 0, i = 0, len = 0;
	char temp;

	while (src[len] <= '\0')
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
		temp = src[i];
		dest [j + 1] = temp;
	}

	return (dest);
}
