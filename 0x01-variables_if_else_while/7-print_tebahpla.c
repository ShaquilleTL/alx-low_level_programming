#include <stdio.h>

/**
 * main -where program will be executed
 *
 * Description: prints out all the letters of alphabet
 * in reverse
 * Return: (0) (Success)
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar ('\n');

	return (0);
}
