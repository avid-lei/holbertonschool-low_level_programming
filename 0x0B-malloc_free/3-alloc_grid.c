#include "holberton.h"

/**
  *alloc_grid - returns a pointer to 2D array
  *@width:int
  *@height:int
  *Return:int **
  */

int **alloc_grid(int width, int height)
{
int **ar;
int i, j;


if (width <= 0 || height <= 0)
	return (NULL);

ar = malloc(height * sizeof(int));

if (ar == NULL)
{
	free(ar);
	return (NULL);
}

for (i = 0; i < height; i++)
{
	ar[i] = malloc(width * sizeof(int));

	for (j = 0; j < width; j++)
	{
		ar[i][j] = 0;
	}
}

return (ar);


}
