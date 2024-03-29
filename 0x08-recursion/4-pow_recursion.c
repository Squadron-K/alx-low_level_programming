#include "main.h"
/**
 * _pow_recursion - Return value 'x' to power 'y'
 * @x: base
 * @y: power
 *
 * Return: 'x' power 'y'
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (_pow_recursion(x, (y - 1)) * x);
}
