#include "main.h"

/**
 * rot13 - rotate characters 13 places
 * @s: type string
 * Return: rotated string
 */

char *rot13(char *s)
{
	int i;
	char alphabet[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char rotate[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			s[i] = (s[i] - 65 > 25) ?
				rotate[s[i] - 97] : alphabet[s[i] - 65];
		}
	}
	return (s);
}
