#include "main.h"
/**
 * print_alphabet - Void function
 *
 * Return: Always (Suceess)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
