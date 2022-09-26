#include "main.h"

/**
 * _memset - fills memory with constant
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory to fill
 * Description: fills first number of bytes of the memory area pointed to by s
 * Return: Pointer to memory
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
