#include <stdio.h>

/**
 * main - Program will be executed here
 *
 * Description: print all numbers with base 10 from 0
 * followed by a new line
 * Return: (0) (Success)
 */
int main(void)

{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);
}
