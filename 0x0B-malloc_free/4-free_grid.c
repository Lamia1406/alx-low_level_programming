#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
  *free_grid - function that frees the memory allocated for 2D array
  *@grid : 2D array
  *@height : height of the array
  *
  *Return: pointer to array.
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);

}
