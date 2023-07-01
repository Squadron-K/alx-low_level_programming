#include "main.h"
#include <string.h>
/**
 * _strncpy - a function that copies n byte from str2 to str1
 * @dest: str1
 * @src: str2
 * @n: number of byte
 *
 * Return: A pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
