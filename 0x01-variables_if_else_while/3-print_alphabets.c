#include <stdio.h>
/**
 *  * main - main block
 *Description: Use `putchar` to print lowercase and then uppercas alphabet.
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

while (alpha <= 'z')
{
	putchar(alpha);
	alpha++;
}
alpha = 'A';
while (alpha <= 'Z')
{
	putchar(alpha);
	alpha++;
}
putchar ('\n');
return (0);
}
