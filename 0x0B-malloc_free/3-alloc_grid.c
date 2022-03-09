#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int h, w;
	int **ptr;

	if(width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);

	if(ptr == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		ptr[h] = malloc(sizeof(int) * width);
		if (ptr[h] == NULL)
		{
			while(h >= 0)
			{
				free(ptr[h]);
				h--;
			}
			free(ptr);
			return (NULL);
		}
	}
		for(h = 0; h < height; h++)
		for(w = 0; w < width; w++)
		ptr[h][w] = 0;
	return (ptr);
}
