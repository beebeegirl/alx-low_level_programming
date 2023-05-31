#include <stdlib.h>

#include "main.h"

/**
*array_range - an array of integers
*@min: Minimum values stored
*@max: Maximum range of values stored
*
*Description:
*A function that creates an array of integers
*
* Return: Pointer to new allocated array
*/

int *array_range(int min, int max)

{

	int *ptr;

	int i, size;


	if (min > max)

		return (NULL);


	size = max - min + 1;



	ptr = malloc(sizeof(int) * size);



	if (ptr == NULL)

		return (NULL);


	for (i = 0; min <= max; i++)

		ptr[i] = min++;


	return (ptr);
}
