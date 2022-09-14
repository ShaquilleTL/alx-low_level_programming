#include "main.h"
/**
 * print_last_digit - print the last digit of any number
 * @n : type int number
 * Return: return value of the last digit (Successful)
 */
int print_last_digit(int n)
{
	int num;

	if (n < 0)
	{
		num = -1 * (n % 10);
		_putchar(num + '0');
		return (num);
	}
	else
	{
		num = n % 10;
		_putchar(num + '0');
		return (num);
	}
}
