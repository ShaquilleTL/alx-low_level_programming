#include <stdio.h>

/**
 * main -program will be executed here
 *
 * Desciption: Prints all the numbers of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar('0' + num);
		}
		else if (num >= 10)
		{
			putchar('a' + num % 10);
		}
	}
putchar('\n');
return (0);
}
