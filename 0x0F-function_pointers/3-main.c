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
	int a, b, c;
	char oper;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error, unable to compute\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error, unable to compute\n");
		exit(99);
	}

	oper = *argv[2];
	if ((oper == '/' || oper == '%') && b == 0)
	{
		printf("Error, Cannot compute\n");
		exit(100);
	}

	c = f(a, b);
	printf("%d\n", c);

	return (0);
}
