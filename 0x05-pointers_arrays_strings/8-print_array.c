#include "main.h"
#include <stdio.h>

/**
 * print_array - print 'n' elements of an array of
 * integers
 * @a: type int pointer array
 * @n: type int integer
 * Descrption: Print the contents of a array
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
		printf("\n");
	}
