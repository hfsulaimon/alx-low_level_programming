#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - Allocate memory for 2d array
 * @width: columns of the array
 * @height: rows of the array
 * Return: a pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int r = height, c = width, i;
	int **s;

	if (height <= 0)
		return (NULL);
	if (width <= 0)
		return (NULL);
	s = (int **)malloc(r * sizeof(int *));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < r; i++)
		s[i] = (int *)malloc(c * sizeof(int));
	return (s);
	free (s);
}
