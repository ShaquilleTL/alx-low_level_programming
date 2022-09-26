#include "main.h"

/**
 * _memset - fills memory with
 * @s: buffer array
 * @b: constant type
 * @n: number of bytes of memory area to fill
 * Description: Fill the first number of byte memory points to
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}


	return (s);
}
