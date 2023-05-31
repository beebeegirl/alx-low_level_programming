#include <stdlib.h>
#include "main.h"

/**
*malloc_checked - allocates memory using malloc
*@b: the number of bytes to allocate
*
* Description:
* This is a function that allocates memory using malloc
*
*Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
exit(98);

return (ptr);
}
