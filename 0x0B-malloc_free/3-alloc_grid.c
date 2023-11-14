#include "main.h"

/**
 * alloc_grid - a function that creates a 2 dimensional array of integers
 *
 * @width : width of the grid
 *
 * @height : height of the grid
 *
 * Return: returns a pointer to a 2 dimensional array of integers
 * NULL on failure
 *
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;
	/* check if width or height are less or equal to 0 */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* allocate memory for height */
	arr = malloc(height * sizeof(int *));
	/* handle no enough memory available */
	if (arr == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		/* allocate memory for width */
		arr[i] = malloc(width * sizeof(int));
		/* handle no enough memory available */
		if (arr[i] == NULL)
		{
			/* Everything is freed if malloc fails */
			for (j = 0 ; j < i ; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
