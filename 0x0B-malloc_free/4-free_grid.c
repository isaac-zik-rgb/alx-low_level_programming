#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free a two dimensional array memory
 * @grid: a memory with an array
 * @height: input
 *
 * Return: pointer
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
