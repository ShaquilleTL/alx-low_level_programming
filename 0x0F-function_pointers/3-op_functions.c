#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - addition operator
 * @a: first int
 * @b: second int
 * Return: sum of two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract operator
 * @a: first int
 * @b: second int
 * Return: sum of two integers(difference)
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply operator
 * @a: first int
 * @b: second int
 * Return: product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide operator
 * @a: first integer
 * @b: second int
 * Return: result of the two integers
 */
int op_div(int a, int b)
{
	if (b == 0)
		printf("Error, Cannot divide by zero\n");
			exit(100);
	return (a / b);
}
/**
 * op_mod - remainder operator
 * @a: int numbr 1
 * @b: int number 2
 * @return: remainder of two integers
 */
int op_mod(int a, int b)
{
	if (b == 0)
		printf("Error, cannot divide by zero\n");
	exit(100);

	return (a % b);
}
