#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - main block to be executed
 * Description: print the sum of all multiples
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 1;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;

		i++;
	}
	printf("%d\n", sum);

	return (0);
}
