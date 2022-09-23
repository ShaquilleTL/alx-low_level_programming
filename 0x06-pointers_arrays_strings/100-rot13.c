#include "main.h"

/**
 * rot13 - rotate characters 13 places
 * @s: type string
 * Return: rotated string
 */

char *rot13(char *s)
{
	int i, j;
	char *alpha;

	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (s[i] == alpha[j])
			{
				int ref;

				ref = ((j + 13) % 26) + ((j / 26) * 26);
				s[i] = alpha[ref];
				break;
			}
			j++;
		}
		i++;
	}
		return (s);
}
