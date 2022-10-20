#include "main.h1"
/**
 * _islower - Entry
 * @c: Function arg
 *
 * Return: 0 Always (Success)
 */
int _islower(int c)
{
	char i;
	int low = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			low = 1;
	}
	return (low);
}
