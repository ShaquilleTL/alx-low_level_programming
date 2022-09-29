#include "main.h"

int _strlen_recursion(char *);
int checker(char *, int, int);

/**
 * _strlen_recursion - this finds the length of a string
 * @s: string
 * Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * checker - this function evaluates a string
 * @s: string to evaluate
 * @start: start of the string
 * @end: end of string
 * Return: 1 if s is a palindrom
 */
int checker(char *s, int start, int end)
{
	if (end <= start)
		return (1);
	else if (*(s + start) != *(s + end))
		return (0);
	else
		return (checker(s, start + 1, end - 1));
}

/**
 * is_palindrome - this function evaluates whethe a string is a palindrome
 * @s: the string to evaluate
 * Return: 1 if positive else 0
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	return (checker(s, 0, len - 1));
}
