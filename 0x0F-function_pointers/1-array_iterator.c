#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function gvn as a parameter on each element
 * @array: array
 * @size: how many element to print
 * @action: pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

