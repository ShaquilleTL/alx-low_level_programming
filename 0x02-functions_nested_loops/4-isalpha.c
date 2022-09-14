#include "main.h"

/**
 * _isalpha - checks if a character is in the alphabet
 * @c : type int character
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
