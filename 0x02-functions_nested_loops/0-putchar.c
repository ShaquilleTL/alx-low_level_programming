#include "main.h"

/**
 * main - Print "_putchar" followed by a new line.
 * description: I am not allowed to inclde standard libraries
 * Return: 0 (Success)
 */

int main(void)
{

	char ALX[] = "_putchar";
	int i = 0;

	while (ALX[i] != '\0')
	{
		_putchar(ALX[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
