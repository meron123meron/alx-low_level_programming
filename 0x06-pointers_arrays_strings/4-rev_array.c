#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: pointer used
 * @n: integer used
 * Return:0
 */
void reverse_array(int *a, int n)
{
int i, z;
for (i = 0; i < n / 2; i++)
{
z = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = z;
}
}
