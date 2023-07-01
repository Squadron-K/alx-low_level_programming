#include "main.h"
#include <string.h>
/**
 * _strcat - An implementation that concancate
 * @dest: string 1
 * @src: string 2
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	size_t len = 0;
	size_t i;

	while (dest[len] != '\0')
		len++;

	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
