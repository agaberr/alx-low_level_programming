#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL if width or height is 0 or negative
*/

int **alloc_grid(int width, int height)
{

	int i, j;

	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (!ptr)
    {
        free(ptr);
		return (NULL);
    }

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

        if (!ptr[i])
        {
            while (i--)
            {
                free(ptr[i]);
            }
            free(ptr);
            return (NULL);
        }
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);

}
