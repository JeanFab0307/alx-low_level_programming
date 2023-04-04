#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the array
 * @height: the height of the array
 *
 *Return: the 2 dim array or NULL if width/height<=0 or fail
 */
int **alloc_grid(int width, int height)
{
	int **buffer;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	buffer = malloc(sizeof(*buffer) * height);
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}
	while (i < height)
	{
		buffer[i] = malloc(sizeof(int) * width);
		if (buffer[i] == NULL)
		{
			while (i >= 0)
				free(buffer[i--]);
			free(buffer);
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			buffer[i][j] = 0;
	}
	return (buffer);
}
