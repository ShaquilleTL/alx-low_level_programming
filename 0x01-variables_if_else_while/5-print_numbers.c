#include <stdio.h>

/**
 * main - Program will be executed here
 *
 * Description: Prints all single line digit numbers
 * followed by a new line
 * Return: (0) (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
	printf("%d", num);
	}
	putchar('\n');
	return (0);
}
