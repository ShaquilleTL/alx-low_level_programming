#include "main.h"

/**
 * _pow_recursion - return the value of 'x' to the power 'y'
 * @x: type integer value
 * @y: type integer power
 * Return: x to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
