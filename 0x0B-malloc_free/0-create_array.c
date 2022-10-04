#include"main.h"
#include <stdlib.h>

/**
 * create_array - create an arrya of chars, and initialize with specific char
 * @c: specific char
 * @size: size of the array
 * Return: char pointer to malloc created momory address or NULL if erro
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
