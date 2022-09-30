#include <stdio.h>

/**
 * main - print the name of the file
 * @argc: argument that counts
 * @argv: arguments passed to main as an array of strings
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
