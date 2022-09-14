#include "main.h"

/**
 * times_table - Prints the 9 times table, starting at 0
 * Return: Always 0
 */

void times_table(void)
{
	/**
	 * x - Factor
	 * y - count
	 * z - computed value
	 */
	int x = 0;
	int y;
	int z;

	while (x < 10)
	{
		y = 0;

		while (y < 10)
		{
			z = x * y;
		if (z > 9)
		{
			_putchar(z / 10 + '0');
			_putchar(z % 10 + '0');
		}
		else if (y != 0)
		{
			_putchar(' ');
			_putchar(z + '0');
		}
		else
		{
			_putchar(z + '0');
		}
		if (y != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		y++;
	}
		_putchar('\n');
		x++;
	}
}
