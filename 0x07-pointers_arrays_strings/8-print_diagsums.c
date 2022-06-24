#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: pointer used
 * @size: integer
 * Return:0
 */
void print_diagsums(int *a, int size)
{
int x, z, d1 = 0, d2 = 0;
for (x = 0; x < size; x++)
{
for (z = 0; z < size; z++)
{
if ( x == z)
{
d1 = d1 + a[x + z];
}
else
{
d2 = d2 + a[x + 1][z - 1];
}
}
printf("%d%d",d1,d2);
}
}
