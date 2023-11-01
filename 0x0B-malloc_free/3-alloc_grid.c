#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - initializes each element of the grid to 0
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **twoDarray;
	int width_index;
	int height_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDarray = malloc(height * sizeof(int *));

	if (twoDarray == NULL)
		return (NULL);

	for (height_index = 0; height_index < height; height_index++)
	{
		twoDarray[height_index] = malloc(width * sizeof(int));
		if (twoDarray[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
				free(twoDarray[height_index]);
			free(twoDarray);
			return (NULL);
		}
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			twoDarray[height_index][width_index] = 0;
	}

	return (twoDarray);
}
