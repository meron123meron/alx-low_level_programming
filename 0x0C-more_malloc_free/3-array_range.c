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
int *p;
if (min > max)
{
return (NULL);
}
p = malloc(sizeof(int) * max);
if (p == NULL)
{
return (NULL);
}
else if (p != NULL)
{
if (min < max)
{
p++;
}
return (p);
}
free(p);
return (0);
}
