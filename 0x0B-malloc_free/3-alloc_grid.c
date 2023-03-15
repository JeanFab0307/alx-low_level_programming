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
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	buffer = malloc(width * height * sizeof(int));
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < height)
		{
			buffer[i][j] = 0;
			j++;
		}
		i++;
	}
	return (buffer);
}
