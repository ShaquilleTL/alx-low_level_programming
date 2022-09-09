#include <stdio.h>

/**
 * main -entry into the program
 *
 * Description: this program will Print the size of different
 * types in C to the terminal on both 32 and 64-bit.
 * Return: 0(Success)
 */

int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %i byte(s)\n", sizeof(long));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long));
	printf("Size of a float: %i byte(s)\n", sizeof(float));

	return (0);
}
