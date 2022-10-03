#include "main.h"

/**
 * _strcpy - copy string pointed to pointer
 * @dest: type char string
 * @src: type char string
 * Description: copy string pointed to by pointer
 * Return: Pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
