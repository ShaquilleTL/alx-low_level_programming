#include <stdio.h>

/**
 * main - print all arguments that it receives
 * @argc: counts the arguments
 * @argv: vector argument and array of string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
