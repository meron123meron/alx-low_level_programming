#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width of the array
 * @height: height of the array
 * Return: NULL or pointer
 */
int **alloc_grid(int width, int height)
{
int h, w, i = 0;
int **pp, *p;
if (width <= 0 || height <= 0)
{
return (NULL);
}
pp = malloc(sizeof(int *) * height);
if (pp == NULL)
{
return (NULL);
}
for (; i < height; i++)
{
pp[i] = malloc(sizeof(int) * width);
if (pp[i] == NULL)
{
for (i = 0; i < height; i++)
{
p = pp[i];
free(p);
}
free(pp);
return (NULL);
}
}
for (h = 0; h < height; h++)
{
for (w = 0; w < width; w++)
{
pp[h][w] = 0;
}
}

return (pp);
}
