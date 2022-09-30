#include "main.h"

/**
 * _strlen_recursion - this function finds the length of a string
 * @s: the string to evaluate
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * checker - checks string
 * @len: length of string
 * Return: 1 if 's' is a palindrom, else 0
 */
int checker(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *s(s + len - 1))
		return (checker(s + 1, len - 2));
	else
		return (0);
}

/**
 * is_palindrome - this function checks whether a string is palindrome
 * @s: the string to check
 * Return: 1 if positive,else 0
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (checker(s, len));
}
