#include "main.h"
/**
 * print_sign - Entry point
 * @n: function Variable
 * Return: 1 || 0
 */

int print_sign(int n)
{
	 int low;
	 int sign;
	 
	 if (n >= 1)
	 {
		 low = 1;
		 _putchar('+');
		 _putchar('\n');
	 }
	 else if (n < 0)
	 {
		 low = -1;
		 _putchar('-');
		 _putchar('\n');
	 }
	 else
	 {
		low = 0;
		_putchar('0');
		_putchar('\n');
	 }
	 return (low)
}
