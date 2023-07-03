#include "main.h"
/**
 * _memset - set memory pointed to by s to b for n-bytes
 * @s: pointer to array
 * @b: element to add
 * @n: number of bytes
 *
 * Return: Pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
