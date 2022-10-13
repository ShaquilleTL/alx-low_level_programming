#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to check the code
 * @argc: argument counter
 * @argv: string of arguments in the array
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error, unable to compute\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error, unable to compute\n");
		exit(99);
	}

	o = get_op_func(argv[2]);
	if (o == NULL)
	{
		printf("Error, unable to compute\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", o(a, b));

	return (0);
}
