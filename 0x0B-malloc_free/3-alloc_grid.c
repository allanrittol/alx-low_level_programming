#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - funtion that return to a 2dimensional array
 * @width: integer dimension
 * @height: integer dimension
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **output;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		output[i] = malloc(sizeof(int) * width);

		if (output[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(output[i]);
			}
			free(output);
			return (NULL);
		}

	}
	for (i = 0; j < width; j++)
		output[i][j] = 0;
	return (output);
}
