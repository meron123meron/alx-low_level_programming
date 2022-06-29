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
if (grid != NULL)
{
for (; height >= 0; height--)
{
free(grid[height]);
}
free(grid);
}
}
