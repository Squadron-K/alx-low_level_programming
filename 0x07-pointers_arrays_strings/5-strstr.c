#include "main.h"
#include <stddef.h>
/**
 * _strstr -Locate a substring
 * @haystack: Main string
 * @needle: Substring
 *
 * Return: Located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	if (*needle == '\0')
		return (haystack);

	for (j = 0; haystack[j] != '\0'; j++)
	{
		if (needle[0] == haystack[j] && needle[1] == haystack[j + 1])
			return (&haystack[j]);
	}
	return (NULL);
}
