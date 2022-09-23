#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: type string
 * Return: Encoded string
 */

char *leet(char *s)
{
	char *c; /* checks for */
	char *r; /* will replace */
	int i;
	int j;

	c = "aeotl";
	r = "43071";
	i = 0;
	while (c[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] == c[i] || s[j] == (c[i] - 32))
			{
				s[j] = r[i];
			}
			j++;
		}
		i++;
	}
	return (s);
}
