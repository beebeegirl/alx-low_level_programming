#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - It will return the sum of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Sum a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - This will return the difference of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - This will return the product of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Two numbers division returned
 * @a: First number
 * @b: Second number
 *
 * Return: a and b quotation
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Remainders of the division of two numbers will be returned
 * @a: The first
 * @b: The second
 *
 * Return: Remainder of division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
