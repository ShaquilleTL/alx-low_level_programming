#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Create a height x width grid in memory
 * @width: width of the grid (columns)
 * @height: Height of the grid (rows)
 *
 * Return: Pointer to the grid
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if ((height > 0) && (width > 0))
	{
		ptr = (int **) malloc(sizeof(int *) * height);
		if (ptr == 0)
		{
			free(ptr);
			return (0);
		}
		for (i = 0; i < height; i++)
		{
			ptr[i] = (int *) malloc(sizeof(int) * width);
			if (ptr[i] == 0)
			{
				for (j = 0; j <= i; j++)
					free(ptr[j]);
				free(ptr);
				return (0);
			}
		}

			for (i = 0; i < height; i++)
			{
				for (j = 0; j < width; j++)
				{
					ptr[i][j] = 0;
				}
			}
		}
		else
		{
			return (0);
		}
		return (ptr);
	}
