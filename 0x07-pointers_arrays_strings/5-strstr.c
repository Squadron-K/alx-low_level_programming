#include "main.h"
#include <stddef.h>
/**
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		if ( needle[0] == haystack[j])
			return (&haystack[j]);
	}
	return (NULL);
}
