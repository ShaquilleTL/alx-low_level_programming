#include "main.h"

/**
 * Print_alphabet_x10 -prints alphabet 10times
 *
 * description: Prints out all letters of alphabet 10times
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		count++;
}
}
