#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: type int param
 * Return: 1 True, 0 False.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
