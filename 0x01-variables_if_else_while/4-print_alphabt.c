#include <stdio.h>

/**
 * main - where program is executed
 *
 * Description: Prints out all letters of alphabet
 * except e and q
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

while (alpha <= 'z')
{
if ((alpha == 'e') || (alpha == 'q'))
{
	alpha++;
}
else
{
	putchar(alpha);
	alpha++;
}
}
putchar('\n');
return (0);
}
