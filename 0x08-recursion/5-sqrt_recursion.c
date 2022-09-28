#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: if no natural square root,  return -1
 */

int _sqrt_recursion(int n)
{
	return (help(n, 1));
}

/**
 * help - helper function to solve math problem
 * @c: determine if square root
 * @i: incrementer to compare against c
 * Return: Square root
 */

int help(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (help(c, i + 1));
	else
		return (-1);
}

