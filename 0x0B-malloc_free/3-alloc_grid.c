#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid-a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width:row of the array
 * @height:coloum of the array
 *
 * Return:NULL on failure
 * otherwise pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = (int **)malloc(sizeof(int *) * height);
	if (a == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = (int *) malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			while (i >= 0)
				free(a[i--]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
