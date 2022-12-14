#include "main.h"

/**
 * _strpbrk - search a string for any set of bytes.
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in 's'
 * NuLL if no byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
				}
				j++;
			}
			i++;
		}

		return (0);
}
