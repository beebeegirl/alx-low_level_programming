#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
*_realloc - This is a function that reallocates mem blck using malloc & free
*@ptr: pointer to the mem that was alloctd by malloc previously
*@old_size: ...
*@new_size: ...
*
*Return: pointer to the current allocated memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int i, n = new_size;
char *oldp = ptr;

if (ptr == NULL)
{
p = malloc(new_size);

return (p);
}
else if (new_size == 0)
{
free(ptr);

return (NULL);
}

else if (new_size == old_size)

return (ptr);

p = malloc(new_size);
if (p == NULL)

return (NULL);

if (new_size > old_size)
n = old_size;

for (i = 0; i < n; i++)
p[i] = oldp[i];
free(ptr);

return (p);
}

