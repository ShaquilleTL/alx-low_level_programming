#include <stdio.h>
#include <stdlib.h>

/**
 * main - add 2 positive numbers
 * @argc: argument to count
 * @argv: argument vector of type string array
 * Description: print 0 if no number
 * Return: Always 0. else 1
 */

int main(int argc, char *argv[])
{
	int sum, i;
	char *p;
	int num;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				sum += num;
			else
			{
				printf("Error\n");
					return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
