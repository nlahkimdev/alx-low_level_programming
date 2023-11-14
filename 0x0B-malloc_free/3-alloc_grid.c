#include "main.h"

/**
 * str_concat - a function that creates a 2 dimensional array of integers
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
	int i;
	int **arr;
	/* check if width is equal or less than 0 */
	if (width <= 0)
		return (NULL);
	/* check if height is equal or less than 0 */
	if (height <= 0)
		return (NULL);
	/* allocate memory for height */
	arr = calloc(height, sizeof(int *));
	/* handle no enough memory available */
	if (arr == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{	
		/* allocate memory for width */
		arr[i] = calloc(width, sizeof(int));
		/* handle no enough memory available */
		if (arr[i] == NULL)
			return (NULL);
	}
	return (arr);
}
