#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: type char array string
 * Description: Fear the lack of pcs
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
}
_putchar('\n');
}
