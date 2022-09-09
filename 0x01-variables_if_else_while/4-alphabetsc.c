#include <stdio.h>

/**
 * main - program execution
 * Description: This program prints out letters of
 * alphabet and then prints our a newline charcter
 * Return 0 (uccessful)
 */

int main(void)
{
	char alpha ='a';
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
