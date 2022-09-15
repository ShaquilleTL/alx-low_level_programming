#include <unistd.h>

/**
 * _putchar - writes the character
 * @c: character to print
 *
 * Return: 1 successful, -1 if false.
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
