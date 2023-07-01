#include "main.h"
/**
 * _strcpy - An implementation that copies src into dest
 * @dest: the pointer to address to recieve values
 * @src: An array of values
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, len = 0;

	while (src[len] != '\0')
		len++;

	while (i <= len)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
