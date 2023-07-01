#include "main.h"
#include <string.h>
/**
 * _strncat - A function that concancate str1 to nth element of str2
 * @dest: str1
 * @src: str2
 * @n: number of element to take from str1 to str2
 *
 *
 *Return: A Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t len = 0;
	int i;

	while (dest[len] != '\0')
		len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
