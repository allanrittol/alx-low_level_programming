#include "main.h"
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

	output = malloc(sizeof((int *) *height);

	if (output == NULL)

	for (i = 0; i < height; i++)
	{
		output[i] = malloc(sizeof(int) * width);

		if (output[i] == NULL)
		{
			free(output);
			for (j = 0; j <= height; j++)
			free(output[j]);
		}

	}
}
