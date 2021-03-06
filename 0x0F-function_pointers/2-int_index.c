#include <stdio.h>
#include "function_pointers.h"
#include <stdbool.h>
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
if (cmp != 0 && array != 0)
{
for (i = 0; i < size; i++)
{
cmp(array[i]);
if (cmp(array[i]) == true)
{
return (i);
}
}

}
return (-1);
}
