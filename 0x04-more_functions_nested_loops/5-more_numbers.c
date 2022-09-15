#include "main.h"

/**
 * more_numbers - print numbers 0 to 14 10 times
 * Description: Add a new line after
 */
void more_numbers(void)
{
	int c, i;

	c = 0;
	while (c < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;
		}
		c++;
		_putchar('\n');
	}
}
