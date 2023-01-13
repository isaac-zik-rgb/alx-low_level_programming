#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - a pointer to a two dmensional arrary
 * @width: input width
 * @height: hight input
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
int **mem;
int i, y;
if (width <= 0 || height <= 0)
return (NULL);
mem = malloc(sizeof(int *) * height);
if (mem == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
mem = malloc(sizeof(int) * width);
if (mem[i] == NULL)
{
for (; i >= 0; i--)
free(mem[i]);
free(mem);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (y = 0; y < width; y++)
mem[i][y] = 0;
}
return (mem);
}
