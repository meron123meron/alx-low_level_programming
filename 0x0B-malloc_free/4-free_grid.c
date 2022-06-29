#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the function that was created on the previous task(pp)
 * @grid: address of the previous function
 * @height: columns
 * Return: 0
 */
void free_grid(int **grid, int height)
{
int i, j, width = 0, **pp, *p;
pp = grid;
for (i = 0; i < height; i++)
{
p = pp[i];
free(p);
for (j = 0; j < width; j++)
{
free(pp);
}
}
}
