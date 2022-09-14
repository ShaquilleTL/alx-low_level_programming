#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - main block
 * Description: Find and print the first 98 fibonnaci num
 * Return: 0
 */
int main(void)
{
	unsigned long int a1 = 0, b1 = 1, a2 = 0, b2 = 2;
	unsigned long int num1, num2, num3;
	int count;

	printf("%lu, %lu, ", b1, b2);
	for (count = 2; count < 98; count++)
	{
		if (b1 + b2 > LARGEST || a1 > 0 || a2 > 0)
		{
			num1 = (b1 + b2) / LARGEST;
			num2 = (b1 + b2) % LARGEST;
			num3 = a1 + a2 + num1;
			a1 = a2, a2 = num3;
			b1 = b2, b2 = num2;
			printf("%lu%010lu", a2, b2);
		}
		else
		{
			num2 = b1 + b2;
			b1 = b2, b2 = num2;
			printf("%lu", b2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}

