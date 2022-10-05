#include "main.h"
#include <stdlib.h>


unsigned int get_length(char *str);
/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2, tot_size;
	unsigned int i, j;
	char *ptr;

	size1 = get_length(s1);
	size2 = get_length(s2);
	tot_size = size1 + size2;
	ptr = (char *) malloc((sizeof(char) * tot_size) + 1);
	if (ptr == 0)
	{
		return (0);
	}
	i = 0;
	j = 0;
	while (i < tot_size)
	{
		if (i < size1)
		{
			ptr[i] = s1[i];
		}
		else if (i >= size1)
		{
			ptr[i] = s2[j];
			j++;
		}
		i++;
	}
	ptr[tot_size] = '\0';
	return (ptr);
}

/**
 * get_length - determines the size of the string
 * @str: string parameter
 *
 * Return: length of string(@str)
 */
unsigned int get_length(char *str)
{
	unsigned int i, length;

	if (str == NULL)
	{
		return (0);
	}

	i = 0;
	length = 0;
	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
