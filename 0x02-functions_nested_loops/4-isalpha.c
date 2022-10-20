#include "main.h"
/**
 * _isalpha - Enrtry function
 * @c: int arg
 *
 * Return: 1 if alpha, 0 is otherwise (Success)
 */
int _isalpha(int c)
{
	char i;
	int low = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			low = 1;
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			low = 1;
	}
	return (low);
}
