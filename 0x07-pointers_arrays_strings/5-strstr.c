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
		if ( needle[0] == haystack[j] && needle[1] == haystack[j + 1])
			return (&haystack[j]);
	}
	return (&haystack[0]);
}
