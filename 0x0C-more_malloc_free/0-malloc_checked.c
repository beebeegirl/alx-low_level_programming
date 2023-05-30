#include <stdlib.h>

#include "main.h"



/**

 * *malloc_checked - It uses malloc to allocate memory

 * @b: The number of bytes allocated

 *

 * Return: Pointer to that allocated memory

 */

void *malloc_checked(unsigned int b)

{

	void *ptr;



	ptr = malloc(b);



	if (ptr == NULL)

		exit(98);



	return (ptr);

}
