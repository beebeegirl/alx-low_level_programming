#include "main.h"
/**
 * swap_int - swapping the values of the two integers
 * @a: integer for swap
 * @b: integer for swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
