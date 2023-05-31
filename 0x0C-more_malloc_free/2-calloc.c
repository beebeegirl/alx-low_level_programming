#include <stdlib.h>

#include "main.h"


/**
* *_memset - It fills the memory with bytes
* @s: The size of memory to be fill
* @b: Ad of mem
* @n: The number of times to copy b
*
* Return: pointer to the memory
*/

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int i;


	for (i = 0; i < n; i++)

	{

		s[i] = b;

	}


	return (s);

}


/**
* *_calloc - Allocate mem to an array
* @nmemb: The number of elements in the array
* @size: size of each element
*
* Description:
* This function allocates memory to an array using malloc
*
* Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *ptr;


	if (nmemb == 0 || size == 0)

		return (NULL);


	ptr = malloc(size * nmemb);


	if (ptr == NULL)

		return (NULL);


	_memset(ptr, 0, nmemb * size);


	return (ptr);

}
