#include "main.h"
/**
 *
 */
int _strcmp(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0;
	int i = 0, n;

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	while ((s1[i] == s2[i]) && (s1[i] || s2[i] != '\0'))
	{
		i++;
		n = 0;
	}

	if (len_s1 > len_s2)
		n = 15;
	if (len_s1 < len_s2)
		n = -15;

	return (n);
}
