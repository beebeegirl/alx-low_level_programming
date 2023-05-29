#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - two dimensional array of integers
 * @width: width
 * @height: height
 * Return: pointers to two dim array of int
 */
int **alloc_grid(int width, int height)
{
	int **baa;
	int a, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	baa = malloc(sizeof(int *) * height);

	if (baa == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		baa[a] = malloc(sizeof(int) * width);

		if (baa[a] == NULL)
		{
			for (; a >= 0; a--)
				free(baa[a]);

			free(baa);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (y = 0; y < width; y++)
			baa[a][y] = 0;
	}

	return (baa);
}
