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
int *p, i, size;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
p = malloc(sizeof(int) * size);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
*p = min + 1;

}
return (p);
}
