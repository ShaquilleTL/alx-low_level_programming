#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings then adds new line
 * @seperator: seperator to print between the strings
 * @n: number of strings to print
 *
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && seperator)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(valist);
}
