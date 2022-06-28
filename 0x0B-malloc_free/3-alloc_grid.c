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
int h, w;
int **pp, *p;
int count = 0;
if (width <= 0 || height <= 0)
{
return (NULL);
}
p = malloc(sizeof(int) * width * height);
pp = &p;
if (p == NULL)
{
return (NULL);
}
else if (p != NULL)
{
for (w = 0; w < width; w++)
{
for (h = 0; h < height; h++)
{
pp[w][h] = ++count;
**pp = 0;
}
}
}
return (pp);
}
