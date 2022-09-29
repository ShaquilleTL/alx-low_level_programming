#include "main.h"

/*
 * is_prime_number - determine if number is prime number
 * @n: type int number
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	else
	return (recursive(n, 5));
}

/**
 * _sqrt - return square root of number
 * @s: number
 * @i: number incrementer acting as divisor
 * Return: square root of number 's'
 */

int _sqrt(int s, int i)
{
	int sqr;

	sqr = i + i;
	if (sqr >= s)
		return (i);
	else
		return (_sqrt(s, i + 1));
}

/**
 * recursive - recursive steps are taken within this function
 * @n: number
 * @d: increment divisor
 * Return: 1 if prime, 0 if not
 */

int recursive(int n, int d)
{
	if (n % d == 0)
		return (0);
	else if (_sqrt(n, 1) < d)
		return (1);
	else
		return (recursive(n, d + 1));
}
