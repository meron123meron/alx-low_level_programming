#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: NULL or pointer
 */
int *array_range(int min, int max)
{
int *p, i;
if (min > max)
{
return (NULL);
}
p = malloc(sizeof(int) * max);
if (p == NULL)
{
return (NULL);
}
if (min < max)
{
for (i = 0; i < max; i++)
{
*p = min + i;
return (p);
}
}
return (0);
}
