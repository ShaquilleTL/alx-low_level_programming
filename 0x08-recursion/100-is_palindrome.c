#include "main.h"

/**
 * strlen_recursion - this finds the length of a string
 * @s: string
 * Return: the lenght of the string
 */

int strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + strlen_recursion(s));
}

/**
 * helper - this function evaluates a string 
 * @s: string to evaluate
 * @len: the length of the string
 * Return: 1 if s is a palindrom
 */
int helper(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 2))
		return (help(s + 1, len - 2));
	else
		return (0);
}

/**
 * is_palindrome - this function evaluates whethe a string is a palindrome
 * @s: the string to evaluate
 * Return: 1 if positive else 0
 */

int is_palindrome(char *s)
{
	int len;

	len = strlen_recursion(s);

	if (len <= 1)
		return (1);

	return (help(s, len));
}
