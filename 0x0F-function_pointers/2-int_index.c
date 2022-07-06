#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - is a function which searches for an integer
 * @array: array of 20 elements
 * @size: number of elements in the array
 * @cmp: function pointer
 *
 * Return: an integer value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}

for (i = 0; i < size; i++)
{
cmp(array[i]);
}
if (*(*cmp) != 0)
{
return (i);
}

return (-1);
}
