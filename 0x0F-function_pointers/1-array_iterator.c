#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that iterates an array
 * @array: array of 5 elements
 * @size: is size of the array
 * @action: function pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
